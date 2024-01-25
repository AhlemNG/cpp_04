#include "../incs/Ice.hpp"

Ice::Ice() : AMateria()
{
    _type = "Ice";
    std::cout << GREEN << "Ice default constuctor called for " << _type << RESET << std::endl;
}
Ice::~Ice()
{
    std::cout << GREEN << "Ice destuctor called for " << _type << RESET << std::endl;
}
Ice::Ice(Ice &src): AMateria()       
{
    _type = src._type;
    std::cout << GREEN << "Ice copy constuctor called for " << _type << RESET << std::endl;
}

Ice &Ice::operator=(Ice const &rhs)
{
    if (this != &rhs)
        _type = rhs.getType();
    return (*this);
}

Ice::Ice(std::string const & type) : AMateria()
{
    _type = type;
    std::cout << GREEN << "Ice parametric constuctor called for " << _type << RESET << std::endl;
}

AMateria* Ice::clone() const //puerement virtuelle elle est specifiee dans la classe fille
{
    Ice *c = new Ice();
    *c = *this;
    return (c);
}
void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << "*" << std::endl;
}