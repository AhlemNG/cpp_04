#ifndef DOG_HPP
#define DOG_HPP

#include "../incs/Animal.hpp"

class Dog : public Animal
{ 
    protected:
        static const std::string _type;
    public:
        Dog(); // default constructor
        virtual ~Dog(); // destructor
        Dog(Dog const &src); //copy constructor
        Dog operator=(Dog const &rhs); // copy assignation operator
};



#endif