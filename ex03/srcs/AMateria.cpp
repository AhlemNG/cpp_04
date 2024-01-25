#include "../incs/AMateria.hpp"

AMateria::AMateria()
{
    std::cout << BLUE << "AMateria default constuctor called" <<  RESET << std::endl;
}
AMateria::~AMateria()
{
    std::cout << BLUE << "AMateria destuctor called for " <<  RESET << std::endl;
}
AMateria::AMateria(AMateria const &src) : _type(src._type) 
{
    std::cout << BLUE << "AMateria copy constuctor called " <<  RESET << std::endl;
}

AMateria &AMateria::operator=(AMateria const &rhs)
{
    if (this != &rhs)
        _type = rhs._type;
    return (*this);
}

AMateria::AMateria(std::string const & type) : _type(type)
{
    std::cout << BLUE << "AMateria parametric constuctor called " <<  RESET << std::endl;
}

std::string const & AMateria::getType() const
{
    return _type;
}

void AMateria::use(ICharacter& target)
{
    std::cout << "* used abstract materia on " << target.getName() << "*" << std::endl;
}
