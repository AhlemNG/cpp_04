/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 18:10:07 by anouri            #+#    #+#             */
/*   Updated: 2024/01/26 18:10:08 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Dog.hpp"
#include "../incs/Colors.hpp"

Dog::Dog() : AAnimal("Dog")// default constructor
{
    _brain = new Brain();
    std::cout << YELLOW << "Dog default constructor called for " << _type << RESET << std::endl;
}
Dog::~Dog() // destructor
{
    delete _brain;
    std::cout << YELLOW << "Dog destructor called for " << _type << RESET << std::endl;
}

Dog::Dog(Dog const &src): AAnimal(src)
{
    _type = src._type;
    _brain = new Brain(*src._brain);
    std::cout << "here here" << std::endl;
    std::cout << YELLOW << "Dog copy constructor called for " << _type << RESET << std::endl;
}
Dog &Dog::operator=(Dog const &rhs) // copy assignation operator
{
    if (this != &rhs)
    {
        if (_brain)
            delete _brain;
        _brain = new Brain();
        _brain = rhs._brain;
        _type = rhs._type;
    }
    std::cout << YELLOW << "Dog copy assignation operator called for " << _type << RESET << std::endl;
    return (*this);
}

void Dog::makeSound() const
{
    std::cout<< YELLOW << "hab hab hab" << RESET << std::endl;
}

void Dog::setIdea(std::string idea, int index)
{
    // Class Brain has a private attribute array of ideas;
    // _brain is pointer to a Brain that has private attribute array of ideas lol
    // ideas can't be accessed outside brain class... we need an accessor -_-

    this->_brain->setIdea(idea, index);
}
std::string Dog::getIdea(int index) const
{
    return this->_brain->getIdea(index);
}