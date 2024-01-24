#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
    protected:
        std::string _type;
    public:
        WrongAnimal();
        WrongAnimal(std::string const name);
        virtual~WrongAnimal();
        WrongAnimal(WrongAnimal const &other);
        WrongAnimal& operator=(WrongAnimal const &rhs);
        std::string const &getType() const;
    
        void makeSound() const;
};

#endif