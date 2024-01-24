#ifndef BRAINL_HPP
#define BRAINL_HPP

#include <iostream>

class Brain
{
    protected:
        std::string  _ideas[100];
    public:
        Brain(); // default constructor
        ~Brain(); // destructor
        Brain(Brain const &src); //copy constructor
        Brain &operator=(Brain const &rhs); // copy assignation operator

        void setIdea(std::string const &idea, int index);
        std::string const &getIdea(int index) const;
        
};

#endif
