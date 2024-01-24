#include "../incs/Animal.hpp"
#include "../incs/Colors.hpp"

Animal::Animal() : _type("no_type") // default constructor
{
    std::cout << BLUE << "Animal default constructor called for " << _type << RESET << std::endl;
}
Animal::~Animal() // destructor
{
    std::cout << BLUE << "Animal destructor called for " << _type << RESET << std::endl;
}
Animal::Animal(Animal const &src) //copy constructor
{
    this->_type = src._type;
    std::cout << BLUE << "Animal copy constructor called for " << _type << RESET << std::endl;
}
Animal &Animal::operator=(Animal const &rhs) // copy assignation operator
{
    if (this != &rhs)
       this->_type = rhs._type;
    std::cout << BLUE << "Animal copy assignation operator called for " << _type << RESET << std::endl;
    return (*this);
}

Animal::Animal(std::string type) : _type(type) // default constructor
{
    std::cout << BLUE << "Animal default constructor called for " << _type << RESET << std::endl;
}

void Animal::makeSound() const
{
    std::cout << BLUE << "sorry I lost my voice" << RESET << std::endl;
}

 std::string const &Animal::getType() const
 {
    return _type;
 }