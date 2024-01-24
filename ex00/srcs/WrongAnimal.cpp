#include "../incs/WrongAnimal.hpp"
#include "../incs/Colors.hpp"

WrongAnimal::WrongAnimal() : _type("no_type") // default constructor
{
    std::cout << BLUE << "WrongAnimal default constructor called for " << _type << RESET << std::endl;
}
WrongAnimal::~WrongAnimal() // destructor
{
    std::cout << BLUE << "WrongAnimal destructor called for " << _type << RESET << std::endl;
}
WrongAnimal::WrongAnimal(WrongAnimal const &src) //copy constructor
{
    *this = src;
    //this->_type = src._type;
    std::cout << BLUE << "WrongAnimal copy constructor called for " << _type << RESET << std::endl;
}
WrongAnimal &WrongAnimal::operator=(WrongAnimal const &rhs) // copy assignation operator
{
    if (this != &rhs)
        *this = rhs; //this->_type = rhs._type;
    std::cout << BLUE << "WrongAnimal copy assignation operator called for " << _type << RESET << std::endl;
    return (*this);
}

WrongAnimal::WrongAnimal(std::string type) : _type(type) // default constructor
{
    std::cout << BLUE << "WrongAnimal default constructor called for " << _type << RESET << std::endl;
}

void WrongAnimal::makeSound() const
{
    std::cout << BLUE << "sorry I lost my voice" << RESET << std::endl;
}

 std::string const &WrongAnimal::getType() const
 {
    return _type;
 }