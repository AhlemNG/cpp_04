/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 18:09:43 by anouri            #+#    #+#             */
/*   Updated: 2024/01/26 18:09:44 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "../incs/AAnimal.hpp"
#include "../incs/Brain.hpp"
#include <string>

class Dog : public AAnimal
{
    private:
        Brain *_brain;
    public:
        Dog(); // default constructor
        virtual ~Dog(); // destructor
        Dog(Dog const &src); //copy constructor
        Dog &operator=(Dog const &rhs); // copy assignation operator

        virtual void makeSound() const;
        void setIdea(std::string idea, int index);
        std::string  getIdea(int index) const;
};

#endif