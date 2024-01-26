/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 16:48:25 by anouri            #+#    #+#             */
/*   Updated: 2024/01/26 16:48:26 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "../incs/Animal.hpp"

class Cat : public Animal
{
    public:
        Cat(); // default constructor
        virtual ~Cat(); // destructor
        Cat(Cat const &src); //copy constructor
        Cat &operator=(Cat const &rhs); // copy assignation operator
        virtual void makeSound() const;
};

#endif
