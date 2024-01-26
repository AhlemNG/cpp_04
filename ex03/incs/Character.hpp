#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "Colors.hpp"
#include "ICharacter.hpp"

class Character : virtual public ICharacter
{
    private:
        std::string _name;
        AMateria *_inventory[4]; //emty at construction
        AMateria **_floor;
        int _floorSize;
        int _maxFloorSize;
    public: 
        Character();//default constructor
        ~Character();//destructor
        Character(Character const &src); //copy constructor
        Character &operator=(Character const &rhs); // copy assignation opetaror

        Character(std::string const & name); // parametric constructor
        
        std::string const & getName() const;
        
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);

};

#endif
