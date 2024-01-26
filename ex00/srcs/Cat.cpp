/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 16:56:46 by anouri            #+#    #+#             */
/*   Updated: 2024/01/26 17:17:17 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Cat.hpp"
#include "../incs/Colors.hpp"


Cat::Cat() : Animal("Cat")// default constructor
{
    std::cout << GREEN << "Cat default constructor called for " << _type << RESET << std::endl;
}
Cat::~Cat() // destructor
{
    std::cout << GREEN << "Cat destructor called for " << _type << RESET << std::endl;
}
Cat::Cat(Cat const &src): Animal(src)
{
    *this = src;
    //this->_type = src._type;
    std::cout << GREEN << "Cat copy constructor called for " << _type << RESET << std::endl;
}
Cat &Cat::operator=(Cat const &rhs) // copy assignation operator
{
    if (this != &rhs)
        *this = rhs; //this->_type = rhs._type;
    std::cout << GREEN << "Cat copy assignation operator called for " << _type << RESET << std::endl;
    return (*this);
}

void Cat::makeSound() const
{
    std::cout<< GREEN << "miao miao miao" << RESET << std::endl;
}