#include "../incs/Dog.hpp"
#include "../incs/Colors.hpp"

const std::string Dog::_type = "Dog";

Dog::Dog(): Animal(this->_type + "Animal")// default constructor
{
    std::cout << BLUE << "Dog default constructor called for " << _type << RESET << std::endl;
}
Dog::~Dog() // destructor
{
    std::cout << BLUE << "Dog destructor called for " << _type << RESET << std::endl;
}
Dog::Dog(Dog const &src): Animal(src)//copy constructor
{
    *this = src;
    //this->_type = src._type;
    std::cout << BLUE << "Dog copy constructor called for " << _type << RESET << std::endl;
}
Dog Dog::operator=(Dog const &rhs) // copy assignation operator
{
    if (this != &rhs)
        *this = rhs; //this->_type = rhs._type;
    std::cout << BLUE << "Dog copy assignation operator called for " << _type << RESET << std::endl;
    return (*this);
}