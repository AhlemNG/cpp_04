#ifndef DOG_HPP
#define DOG_HPP

#include "../incs/AAnimal.hpp"
#include "../incs/Brain.hpp"

class Dog : public AAnimal
{
    private:
        Brain *_brain;
    public:
        Dog(); // default constructor
        virtual ~Dog(); // destructor
        Dog(Dog const &src); //copy constructor
        Dog &operator=(Dog const &rhs); // copy assignation operator

        virtual void makeSound() const;
        void setIdea(std::string const &idea, int index);
        std::string const &getIdea(int index) const;
};

#endif