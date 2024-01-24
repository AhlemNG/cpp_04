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
        virtual void makeSound();
};

#endif
