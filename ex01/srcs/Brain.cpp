/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 16:58:53 by anouri            #+#    #+#             */
/*   Updated: 2024/01/26 17:29:30 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Brain.hpp"
#include "../incs/Colors.hpp"

Brain::Brain() // default constructor
{
    std::cout << MAGENTA << "Brain default constructor called" << RESET << std::endl;
}
Brain::~Brain() // destructor
{
    std::cout << MAGENTA << "Brain destructor called" << RESET << std::endl;
}
Brain::Brain(Brain const &src) //copy constructor
{
    for (int i = 0; i < 99; i++)
        this->_ideas[i] = src._ideas[i];
    std::cout << "in brain" << std::endl;
    std::cout << MAGENTA << "Brain copy constructor called" << RESET << std::endl;
}
Brain &Brain::operator=(Brain const &rhs) // copy assignation operator
{
    if (this != &rhs)
        *this = rhs;
    std::cout << MAGENTA << "Brain copy assignation operator called" << RESET << std::endl;
    return (*this);
}

void Brain::setIdea(std::string  idea, int index)
{
    if (index >= 0 && index <= 99)
      _ideas[index] = idea;
    else if (index < 0)
            std::cout << RED << "I am not that stupid -_- " <<RESET << std::endl;
    else
        std::cout << RED << "This is OVERTHINKING!!!!!" <<RESET << std::endl;
}

std::string  Brain::getIdea(int index) const
{
    if (index >= 0 && index <= 99)
        return _ideas[index];
    else if (index < 0)
        std::cout << RED << "Only positive vibes!!!" << RESET <<std::endl;
    else
        std::cout << RED << "This is OVERTHINKING!!!!!" << RESET << std::endl;
    return ("");
}