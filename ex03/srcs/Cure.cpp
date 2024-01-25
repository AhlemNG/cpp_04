#include "../incs/Cure.hpp"

Cure::Cure() : AMateria()
{
    _type = "cure";
    std::cout << GREEN << "Cure default constuctor called for " << _type << RESET << std::endl;
}
Cure::~Cure()
{
    std::cout << GREEN << "Cure destuctor called for " << _type << RESET << std::endl;
}
Cure::Cure(Cure &src): AMateria()       
{
    _type = src._type;
    std::cout << GREEN << "Cure copy constuctor called for " << _type << RESET << std::endl;
}

Cure &Cure::operator=(Cure const &rhs)
{
    if (this != &rhs)
        _type = rhs.getType();
    return (*this);
}

Cure::Cure(std::string const & type) : AMateria()
{
    _type = type;
    std::cout << GREEN << "Cure parametric constuctor called for " << _type << RESET << std::endl;
}

AMateria* Cure::clone() const //puerement virtuelle elle est specifiee dans la classe fille
{
    Cure *c = new Cure();
    *c = *this;
    return (c);
}
void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}