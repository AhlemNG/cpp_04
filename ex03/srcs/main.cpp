/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 18:11:37 by anouri            #+#    #+#             */
/*   Updated: 2024/01/26 18:25:26 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Colors.hpp"
#include "../incs/MateriaSource.hpp"
#include "../incs/Cure.hpp"
#include "../incs/Ice.hpp"
#include "../incs/Character.hpp"

int main()
{
    std::cout << "____________________test______________________" << std::endl;
    
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
    
    std::cout << "____________________test______________________" << std::endl;
    
    IMateriaSource* src1 = new MateriaSource();
    src1->learnMateria(new Ice());
    src1->learnMateria(new Ice());
    src1->learnMateria(new Cure());
    src1->learnMateria(new Cure());
    ICharacter* Joey = new Character("Joey");
    AMateria* temp;
    AMateria* temp1;
    
    temp = src1->createMateria("ice");
    Joey->equip(temp);
    temp = src1->createMateria("cure");
    Joey->equip(temp);
    temp = src1->createMateria("ice");
    Joey->equip(temp);
    
    ICharacter* jack = new Character("jack");
    Joey->use(0, *jack);
    Joey->use(1, *jack);
    
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
    delete jack;
    delete Joey;
    delete src1;
    return 0;
}