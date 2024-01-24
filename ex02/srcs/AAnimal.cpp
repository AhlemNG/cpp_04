#include "../incs/AAnimal.hpp"
#include "../incs/Colors.hpp"

AAnimal::AAnimal() : _type("no_type") // default constructor
{
    std::cout << BLUE << "AAnimal default constructor called for " << _type << RESET << std::endl;
}
AAnimal::~AAnimal() // destructor
{
    std::cout << BLUE << "AAnimal destructor called for " << _type << RESET << std::endl;
}
AAnimal::AAnimal(AAnimal const &src) //copy constructor
{
    this->_type = src._type;
    std::cout << BLUE << "AAnimal copy constructor called for " << _type << RESET << std::endl;
}
AAnimal &AAnimal::operator=(AAnimal const &rhs) // copy assignation operator
{
    if (this != &rhs)
       this->_type = rhs._type;
    std::cout << BLUE << "AAnimal copy assignation operator called for " << _type << RESET << std::endl;
    return (*this);
}

AAnimal::AAnimal(std::string type) : _type(type) // default constructor
{
    std::cout << BLUE << "AAnimal default constructor called for " << _type << RESET << std::endl;
}

void AAnimal::makeSound() const
{
    std::cout << BLUE << "sorry I lost my voice" << RESET << std::endl;
}

 std::string const &AAnimal::getType() const
 {
    return _type;
 }