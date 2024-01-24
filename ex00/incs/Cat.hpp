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
