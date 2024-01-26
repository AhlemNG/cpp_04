/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 18:09:58 by anouri            #+#    #+#             */
/*   Updated: 2024/01/26 18:09:59 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Cat.hpp"
#include "../incs/Colors.hpp"

Cat::Cat() : AAnimal("Cat")// default constructor
{
    _brain = new Brain();
    std::cout << GREEN << "Cat default constructor called for " << _type << RESET << std::endl;
}
Cat::~Cat() // destructor
{
    delete _brain;
    std::cout << GREEN << "Cat destructor called for " << _type << RESET << std::endl;
}
Cat::Cat(Cat const &src): AAnimal(src)
{
     _type = src._type;
    _brain = new Brain(*src._brain);
    std::cout << GREEN << "Cat copy constructor called for " << _type << RESET << std::endl;
}
Cat &Cat::operator=(Cat const &rhs) // copy assignation operator
{
   if (this != &rhs)
    {
        if (_brain)
            delete _brain;
        _brain = new Brain(*rhs._brain);
        _type = rhs._type;
    }
    std::cout << GREEN << "Cat copy assignation operator called for " << _type << RESET << std::endl;
    return (*this);
}

void Cat::makeSound() const
{
    std::cout<< GREEN << "miao miao miao" << RESET << std::endl;
}

void Cat::setIdea(std::string idea, int index)
{
    // Class Brain has a private attribute array of ideas;
    // _brain is pointer to a Brain that has private attribute array of ideas lol
    // ideas can't be accessed outside brain class... we need an accessor -_-

    this->_brain->setIdea(idea, index);
}
std::string  Cat::getIdea(int index) const
{
    return this->_brain->getIdea(index);
}