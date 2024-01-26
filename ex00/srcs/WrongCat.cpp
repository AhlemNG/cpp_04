/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 16:57:19 by anouri            #+#    #+#             */
/*   Updated: 2024/01/26 16:57:23 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/WrongCat.hpp"
#include "../incs/Colors.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")// default constructor
{
    std::cout << GREEN << "WrongCat default constructor called for " << _type << RESET << std::endl;
}
WrongCat::~WrongCat() // destructor
{
    std::cout << GREEN << "WrongCat destructor called for " << _type << RESET << std::endl;
}
WrongCat::WrongCat(WrongCat const &src): WrongAnimal(src)
{
    *this = src;
    //this->_type = src._type;
    std::cout << GREEN << "WrongCat copy constructor called for " << _type << RESET << std::endl;
}
WrongCat &WrongCat::operator=(WrongCat const &rhs) // copy assignation operator
{
    if (this != &rhs)
        *this = rhs; //this->_type = rhs._type;
    std::cout << GREEN << "WrongCat copy assignation operator called for " << _type << RESET << std::endl;
    return (*this);
}

void WrongCat::makeSound()
{
    std::cout<< GREEN << "miao miao miao" << RESET << std::endl;
}