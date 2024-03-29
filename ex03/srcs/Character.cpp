/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 18:11:20 by anouri            #+#    #+#             */
/*   Updated: 2024/01/26 18:11:21 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/AMateria.hpp"
#include "../incs/ICharacter.hpp"
#include "../incs/Character.hpp"

Character::Character() : _name("no_name"), _floorSize(0)
{
    _floor = NULL;
    // _maxFloorSize = 0;
    for (int i = 0; i < 4; i++)
        _inventory[i] = 0;
    // std::cout << LBLUE << "Character default Constructor Called" << RESET << std::endl;
}
Character::~Character()
{
    for (int i = 0; i < 4; ++i)
    {
        if (_inventory[i])
            delete _inventory[i];
    }
    if (_floor)
    {
        for (int i = 0; i < _floorSize; i++) 
        {
            delete _floor[i];
        }
        delete[] _floor;
    }
    // std::cout << LBLUE << "Character Destructor Called" << RESET << std::endl;
}
Character::Character(const Character &src)
{
    _name = src.getName();
    _floorSize = src._floorSize;
    _floorSize = src._maxFloorSize;
    if (src._floor)
        _floor = src._floor;
    for (int i = 0; i < 4; i++)
        _inventory[i] = src._inventory[i]->clone();
    
    // std::cout << LBLUE << "Character Copy Constructor Called for "<< _name << RESET << std::endl;
}
Character &Character::operator=(const Character &rhs)
{
    if (this != &rhs)
    {
        _name = rhs.getName();
        _floorSize = rhs._floorSize;
        _floorSize = rhs._maxFloorSize;

        if (_floor)
        {
            for (int i = 0; i < _floorSize; i++)
            {
                if (_floor[i])
                    delete _floor[i];
                _floor[i] = rhs._floor[i]->clone();
            }
        }
        for (int i = 0; i < 4; i++)
        {
            if (_inventory[i])
                delete _inventory[i];
            _inventory[i] = rhs._inventory[i]->clone();
        }
    }
    // std::cout << LBLUE << "Character Assignment Operator Called" << RESET << std::endl;
    return *this;
}

Character::Character(std::string const &name) : _name(name), _floor(0), _floorSize(0), _maxFloorSize(0)
{
   
    for (int i = 0; i < 4; i++)
        _inventory[i] = 0;
    // std::cout << LBLUE << "Character parametric Constructor Called" << RESET << std::endl;
}

void Character::equip(AMateria *m)
{
    if (!m)
    {
        std::cout << "there is nothing to add!!!!" << std::endl;
        return;
    }
    int i;
    for (i = 0; i < 4; i++)
    {
        if (_inventory[i] && m->getType() == _inventory[i]->getType())
        {
            std::cout << LBLUE << _name <<"already has this materia!!"<< RESET << std::endl;
            return;
        }
        if (m && !_inventory[i])
        {
            _inventory[i] = m;
            std::cout << "*materia " << _inventory[i]->getType() << " has been added successfully to " << _name << "'s inventory*" << std::endl;
            return;
        }
    }
    if (i == 4)
    {
        std::cout << "Impossible to add materia. " << _name << "'s inventory is full" << std::endl;
        delete m;
    }
    else 
    {
        std::cout << "this is not a Matreria!!!!" << std::endl;
        delete m;
    }
}


void Character::unequip(int idx)
{
    if (idx < 0 || idx >= 4)
        std::cout << "Invalid index: " << idx << std::endl;
    else if (idx >= 0 && idx < 4 && _inventory[idx])
    {
        if (!_floor)
        {
            _floor = new AMateria*[1];
            _floorSize = 1;
        }
        else if (_floor)
        {
            AMateria **newFloor = new AMateria*[_floorSize + 1];
            _floorSize +=1;
            for (int i = 0; i < _floorSize; i++)
            {
                newFloor[i] = _floor[i];
            }
            delete []_floor;
            _floor = newFloor;
        }
        _floor[_floorSize] = _inventory[idx];
        _inventory[idx] = 0;
        std::cout << _floor[idx] << " has been removed from " << _name << "'s inventory." << std::endl;
    }
    else
        std::cout << "Inventory is empty at index " << idx << std::endl;
}

void Character::use(int idx, ICharacter &target)
{
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
       std::cout << "No Materia to be used ! Index " << idx << " is empty." << std::endl;
    }
}

std::string const &Character::getName() const
{ 
    return _name;
}
