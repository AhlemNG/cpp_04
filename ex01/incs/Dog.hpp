/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 16:58:45 by anouri            #+#    #+#             */
/*   Updated: 2024/01/26 17:29:25 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "../incs/Animal.hpp"
#include "../incs/Brain.hpp"

class Dog : public Animal
{
    private:
        Brain *_brain;
    public:
        Dog(); // default constructor
        virtual ~Dog(); // destructor
        Dog(Dog const &src); //copy constructor
        Dog &operator=(Dog const &rhs); // copy assignation operator

        virtual void makeSound() const;
        void setIdea(std::string  idea, int index);
        std::string getIdea(int index) const;
};

#endif