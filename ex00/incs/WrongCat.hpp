/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 16:48:43 by anouri            #+#    #+#             */
/*   Updated: 2024/01/26 16:48:58 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "../incs/WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        WrongCat(); // default constructor
        virtual ~WrongCat(); // destructor
        WrongCat(WrongCat const &src); //copy constructor
        WrongCat &operator=(WrongCat const &rhs); // copy assignation operator
        void makeSound();
};

#endif
