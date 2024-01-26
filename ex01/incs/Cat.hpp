/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 16:58:40 by anouri            #+#    #+#             */
/*   Updated: 2024/01/26 17:29:21 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "../incs/Animal.hpp"
#include "../incs/Brain.hpp"

class Cat : public Animal
{
    private:
        Brain *_brain;
    public:
        Cat(); // default constructor
        virtual ~Cat(); // destructor
        Cat(Cat const &src); //copy constructor
        Cat &operator=(Cat const &rhs); // copy assignation operator

        virtual void makeSound() const;
        void setIdea(std::string idea,int index);
        std::string  getIdea(int index) const;
};

#endif
