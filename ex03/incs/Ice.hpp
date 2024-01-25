#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include "Colors.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice :virtual public AMateria
{
    public: 
        Ice();//default constructor
        virtual ~Ice();//destructor
        Ice(Ice &src); //copy constructot
        Ice &operator=(Ice const &rhs); // copy assignation opetaror

        Ice(std::string const & type); // parametric constructor
        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);
};

#endif
