#ifndef DOG_HPP
#define DOG_HPP

#include "../incs/Animal.hpp"

class Dog : public Animal
{
    public:
        Dog(); // default constructor
        virtual ~Dog(); // destructor
        Dog(Dog const &src); //copy constructor
        Dog &operator=(Dog const &rhs); // copy assignation operator
        virtual void makeSound() const;
};

#endif