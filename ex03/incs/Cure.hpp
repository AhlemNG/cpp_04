/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 18:11:00 by anouri            #+#    #+#             */
/*   Updated: 2024/01/26 18:11:01 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include "Colors.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : virtual public AMateria
{
    public: 
        Cure();//default constructor
        ~Cure();//destructor
        Cure(Cure const &src); //copy constructot
        Cure &operator=(Cure const &rhs); // copy assignation opetaror

        Cure(std::string const & type); // parametric constructor
        
        virtual AMateria* clone() const;
        void use(ICharacter& target);
};

#endif
