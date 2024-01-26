#include <iostream>
#include "../incs/Colors.hpp"
#include "../incs/AMateria.hpp"
#include "../incs/MateriaSource.hpp"
#include "../incs/Cure.hpp"
#include "../incs/Ice.hpp"
#include "../incs/ICharacter.hpp"
#include "../incs/Character.hpp"

// int main()
// {
//     IMateriaSource* src = new MateriaSource();
//     src->learnMateria(new Ice());
//     src->learnMateria(new Cure());
//     ICharacter* me = new Character("me");
//     AMateria* tmp;
//     tmp = src->createMateria("ice");
//     me->equip(tmp);
//     tmp = src->createMateria("cure");
//     me->equip(tmp);
//     ICharacter* bob = new Character("bob");
//     me->use(0, *bob);
//     me->use(1, *bob);
//     delete bob;
//     delete me;
//     delete src;
//     return 0;
// }

// #include "Cure.hpp"
// #include "Ice.hpp"
// #include "MateriaSource.hpp"
// #include "Character.hpp"

int main() {
    std::cout << "__________________________________________" << std::endl;
	std::cout << "__________________TEST1___________________" << std::endl;
    
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    
    delete bob;
    delete me;
    delete src;
    
    std::cout << "__________________________________________" << std::endl;
	std::cout << "__________________TEST2___________________" << std::endl;
    
    IMateriaSource* src1 = new MateriaSource();
    src1->learnMateria(new Ice());
    src1->learnMateria(new Ice());
    src1->learnMateria(new Cure());
    src1->learnMateria(new Cure());
    ICharacter* john = new Character("john");
    AMateria* temp;
    AMateria* temp1;
    
    temp = src1->createMateria("ice");
    john->equip(temp);
    temp = src1->createMateria("cure");
    john->equip(temp);
    temp = src1->createMateria("ice");
    john->equip(temp);
    
    ICharacter* jack = new Character("jack");
    john->use(0, *jack);
    john->use(1, *jack);
    
    std::cout << "__________________________________________" << std::endl;
	std::cout << "__________________________________________" << std::endl;
    
    temp1 = src1->createMateria("ice");
    jack->equip(temp1);
    temp1 = src1->createMateria("ice");
    jack->equip(temp1);
    temp1 = src1->createMateria("ice");
    jack->equip(temp1);
    temp1 = src1->createMateria("cure");
    jack->equip(temp1);
    temp1 = src1->createMateria("cure");
    jack->equip(temp1);
    
    std::cout << "__________________________________________" << std::endl;
	std::cout << "__________________________________________" << std::endl;
    
    jack->unequip(0);
    jack->unequip(1);
    jack->unequip(2);
    
    std::cout << "__________________________________________" << std::endl;
	std::cout << "__________________________________________" << std::endl;
    
    jack->use(0, *john);
    jack->use(1, *john);
    jack->use(2, *john);
    jack->use(3, *john);
    jack->use(4, *john);

    delete jack;
    delete john;
    delete src1;
   
    return 0;
}