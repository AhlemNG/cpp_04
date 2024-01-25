#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include "Colors.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure :virtual public AMateria
{
    public: 
        Cure();//default constructor
        virtual ~Cure();//destructor
        Cure(Cure &src); //copy constructot
        Cure &operator=(Cure const &rhs); // copy assignation opetaror

        Cure(std::string const & type); // parametric constructor
        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);
};

#endif
