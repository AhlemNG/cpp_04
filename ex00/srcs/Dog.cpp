#include "../incs/Dog.hpp"
#include "../incs/Colors.hpp"

Dog::Dog() : Animal("Dog")// default constructor
{
    std::cout << YELLOW << "Dog default constructor called for " << _type << RESET << std::endl;
}
Dog::~Dog() // destructor
{
    std::cout << YELLOW << "Dog destructor called for " << _type << RESET << std::endl;
}
Dog::Dog(Dog const &src): Animal(src)
{
    *this = src;
    //this->_type = src._type;
    std::cout << YELLOW << "Dog copy constructor called for " << _type << RESET << std::endl;
}
Dog &Dog::operator=(Dog const &rhs) // copy assignation operator
{
    if (this != &rhs)
        *this = rhs; //this->_type = rhs._type;
    std::cout << YELLOW << "Dog copy assignation operator called for " << _type << RESET << std::endl;
    return (*this);
}

void Dog::makeSound() const
{
    std::cout<< YELLOW << "hab hab hab" << RESET << std::endl;
}