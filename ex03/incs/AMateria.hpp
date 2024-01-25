#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "Colors.hpp"

class ICharacter;

class AMateria
{
    protected:
        std::string _type;
    public:
        AMateria();//default constructor
        virtual ~AMateria();//destructor
        AMateria(AMateria const &src); //copy constructor  
        AMateria &operator=(AMateria const &rhs); // copy assignation operator
        AMateria(std::string const & type); // parametric constructor

        std::string const & getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif
