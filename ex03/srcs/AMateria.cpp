/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 11:25:53 by anouri            #+#    #+#             */
/*   Updated: 2024/01/26 12:18:49 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../incs/AMateria.hpp"
#include "../incs/ICharacter.hpp"

AMateria::AMateria()
{
    // std::cout << BLUE << "AMateria default constuctor called" <<  RESET << std::endl;
}
AMateria::~AMateria()
{
    // std::cout << BLUE << "AMateria destuctor called " <<  RESET << std::endl;
}
AMateria::AMateria(AMateria const &src) : _type(src._type) 
{
    // std::cout << BLUE << "AMateria copy constuctor called " <<  RESET << std::endl;
}

AMateria &AMateria::operator=(AMateria const &rhs)
{
    if (this != &rhs)
        _type = rhs._type;
    return (*this);
}

AMateria::AMateria(std::string const & type) : _type(type)
{
    // std::cout << BLUE << "AMateria parametric constuctor called for " << _type <<RESET << std::endl;
}

std::string const & AMateria::getType() const
{
    return _type;
}

void AMateria::use(ICharacter& target)
{
    std::cout << "* used abstract materia on " << target.getName() << "*" << std::endl;
}
