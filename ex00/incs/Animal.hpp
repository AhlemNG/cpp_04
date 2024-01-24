#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal 
{
    protected:
        std::string _type;
    public:
        Animal(); // default constructor
        virtual ~Animal(); // destructor
        Animal(Animal const &src); //copy constructor
        Animal &operator=(Animal const &rhs); // copy assignation operator
        Animal(std::string type); // parametric constructor

        virtual void makeSound() const;
        std::string const &getType() const;
};



#endif