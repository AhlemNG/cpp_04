#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include "Colors.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
    public: 
        Ice();//default constructor
        ~Ice();//destructor
        Ice(Ice const &src); //copy constructor
        Ice &operator=(Ice const &rhs); // copy assignation opetaror

        Ice(std::string const & type); // parametric constructor
        
        virtual AMateria* clone() const;
        void use(ICharacter& target);
};

#endif
