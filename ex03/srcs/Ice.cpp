#include "../incs/Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    std::cout << WHITE << "Ice default constuctor called for " << _type << RESET << std::endl;
}
Ice::~Ice()
{
    std::cout << WHITE << "Ice destuctor called for " << _type << RESET << std::endl;
}
Ice::Ice(Ice const &src): AMateria(src)       
{
    std::cout << WHITE << "Ice copy constuctor called for " << _type << RESET << std::endl;
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
    std::cout << WHITE << "Ice parametric constuctor called for " << _type << RESET << std::endl;
}

AMateria* Ice::clone() const //puerement virtuelle elle est specifiee dans la classe fille
{
    return (new Ice(*this));
}
void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << "*" << std::endl;
}