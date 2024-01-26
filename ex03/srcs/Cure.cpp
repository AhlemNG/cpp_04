#include "../incs/Cure.hpp"

Cure::Cure() : AMateria("cure")
{
    // std::cout << GREEN << "Cure default constuctor called for " << _type << RESET << std::endl;
}
Cure::~Cure()
{
    // std::cout << GREEN << "Cure destuctor called for " << _type << RESET << std::endl;
}
Cure::Cure(Cure const &src): AMateria(src)       
{
    // std::cout << GREEN << "Cure copy constuctor called for " << _type << RESET << std::endl;
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
    // std::cout << GREEN << "Cure parametric constuctor called for " << _type << RESET << std::endl;
}

AMateria* Cure::clone() const //puerement virtuelle elle est specifiee dans la classe fille
{
    return (new Cure(*this));
}
void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}