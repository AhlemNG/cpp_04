#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include "Colors.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
    public: 
        Cure();//default constructor
        ~Cure();//destructor
        Cure(Cure const &src); //copy constructot
        Cure &operator=(Cure const &rhs); // copy assignation opetaror

        Cure(std::string const & type); // parametric constructor
        
        virtual AMateria* clone() const;
        void use(ICharacter& target);
};

#endif
