#include "../incs/MateriaSource.hpp"
#include "../incs/IMateriaSource.hpp"
#include "../incs/AMateria.hpp"

MateriaSource::MateriaSource()
{
    for ( int i = 0; i < 4; i++)
        _learntMateria[i] = 0; 
    std::cout << YELLOW << "MateriaSource default constuctor called " << RESET << std::endl;
}
MateriaSource::~MateriaSource()
{
    for ( int i = 0; i < 4; i++)
    {
        if (_learntMateria[i])
            delete _learntMateria[i]; 
    }
    std::cout << YELLOW << "MateriaSource destuctor called " << RESET << std::endl;
}
MateriaSource::MateriaSource(MateriaSource const &src)    
{
    for ( int i = 0; i < 4; i++)
    {
        if (src._learntMateria[i])
            _learntMateria[i] = src._learntMateria[i];
    }
    std::cout << YELLOW << "MateriaSource copy constuctor called " << RESET << std::endl;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &rhs)
{
    if (this != &rhs)
    {
        for ( int i = 0; i < 4; i++)
        {
            if (_learntMateria[i])
                delete _learntMateria[i]; 
            _learntMateria[i] = rhs._learntMateria[i]->clone();
        }
    }   
    return (*this);
}
   
void MateriaSource::learnMateria(AMateria* m)
{

    for ( int i = 0; i < 4; i++)
    {
        if (!m)
            std::cout << YELLOW << "this is not a materia, nothing to learn!!!" << RESET << std::endl;
        else if (m->getType() == _learntMateria[i]->getType())
        {
            std::cout << YELLOW << "Materia already learnt!!!" << RESET << std::endl;
            delete m;
        }
        else if (m && !_learntMateria[i])
        {
            _learntMateria[i] = m;
            std::cout << YELLOW << "New materia learnt successfully!!!" << RESET << std::endl;
        }
        else if (m)
        {
            std::cout << YELLOW << "Sorry! Materia Learning attained maximum capacity!!!" << RESET << std::endl;
            delete m;
        }
    }
}
AMateria* MateriaSource::createMateria(std::string const& type)
{
    for ( int i = 0; i < 4; i++)
    {
        if (_learntMateria[i] && _learntMateria[i]->getType() == type)
            return (_learntMateria[i]->clone());
    }
    std::cout << YELLOW << "materia type is unkown, nothing to create!!!" << RESET << std::endl;
    return (0);
}