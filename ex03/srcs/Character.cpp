#include "../incs/Character.hpp"
#include "../incs/ICharacter.hpp"
#include "../incs/AMateria.hpp"

Character::Character() : _name("no_name")
{
    for (int i = 0; i < 4; i++)
        _inventory[i] = 0;
    std::cout << LBLUE << "Character default Constructor Called" << RESET << std::endl;
}
Character::~Character()
{
  for (int i = 0; i < 4; i++) 
  {
    if (_inventory[i])
      delete _inventory[i];
  }
  std::cout << LBLUE << "Character Destructor Called" << RESET << std::endl;
}
Character::Character(const Character &src)
{
    _name = src.getName();
    for (int i = 0; i < 4; i++)
        _inventory[i] = src._inventory[i]->clone();
    std::cout << LBLUE << "Character Copy Constructor Called" << RESET << std::endl;
}
Character &Character::operator=(const Character &rhs)
{
    if (this != &rhs)
    {
        _name = rhs.getName();
        for (int i = 0; i < 4; i++)
            _inventory[i] = rhs._inventory[i]->clone();
    }
    std::cout << LBLUE << "Character Assignment Operator Called" << RESET << std::endl;
    return *this;
}

Character::Character(std::string const &name) : _name(name)
{
    for (int i = 0; i < 4; i++)
        _inventory[i] = 0;
    std::cout << LBLUE << "Character parametric Constructor Called" << RESET << std::endl;
}

void Character::equip(AMateria *m)
{
    if (!m)
    {
        std::cout << "there is nothing to add!!!!" << std::endl;
        return;
    }
    for (int i = 0; i < 4; i++)
    {
        if (m->getType() == _inventory[i]->getType())
        {
            std::cout << LBLUE << _name <<"already has this materia!!"<< RESET << std::endl;
            return;
        }
    }
    for (int i = 0; i < 4; i++)
    {
        if (m && !_inventory[i])
        {
            _inventory[i] = m;
            std::cout << "*materia " << _inventory[i]->getType() << " has been added successfully to " << _name << "'s inventory*" << std::endl;
            return;
        }
    }
    if (m)
    {
        std::cout << "Impossible to add materia. " << _name << "'s inventory is full" << std::endl;
        // delete m;
    }
    else 
    {
        std::cout << "this is not a Matreria!!!!" << std::endl;
        // delete m;
    }
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx >= 4)
        std::cout << "Invalid index: " << idx << std::endl;
    else if (idx >= 0 && idx < 4 && _inventory[idx])
    {
        _inventory[idx] = 0;
        std::cout << _inventory[idx] << " has been removed from " << _name << "'s inventory." << std::endl;
    }
    else
        std::cout << "Inventory is empty at index " << idx << std::endl;
}

void Character::use(int idx, ICharacter &target) {

    if (idx >= 0 && idx < 4 && _inventory[idx])
    {
        _inventory[idx]->use(target);
    } 
    else if (idx < 0 || idx >= 4)
    {
        std::cout << "Invalid index: " << idx << std::endl;
    }
    else
    {
       std::cout << "No Materia to be equiped ! Index " << idx << " is empty." << std::endl;
    }
}

std::string const &Character::getName() const
{ 
    return _name;
}
