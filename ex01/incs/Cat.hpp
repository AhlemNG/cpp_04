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
        void setIdea(std::string const &idea,int index);
        std::string const &getIdea(int index) const;
};

#endif
