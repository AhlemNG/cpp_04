/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 18:09:28 by anouri            #+#    #+#             */
/*   Updated: 2024/01/26 18:09:29 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

class AAnimal //abstract calss 
{
    protected:
        std::string _type;
    public:
        AAnimal(); // default constructor
        virtual ~AAnimal(); // destructor
        AAnimal(AAnimal const &src); //copy constructor
        AAnimal &operator=(AAnimal const &rhs); // copy assignation operator
        AAnimal(std::string type); // parametric constructor

        virtual void makeSound() const = 0;
        std::string const &getType() const;
};



#endif