/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 18:09:39 by anouri            #+#    #+#             */
/*   Updated: 2024/01/26 18:09:40 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "../incs/AAnimal.hpp"
#include "../incs/Brain.hpp"
#include <string>

class Cat : public AAnimal
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
