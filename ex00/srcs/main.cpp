/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 16:57:04 by anouri            #+#    #+#             */
/*   Updated: 2024/01/26 16:57:08 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Animal.hpp"
#include "../incs/Colors.hpp"
#include "../incs/Dog.hpp"
#include "../incs/Cat.hpp"
#include "../incs/WrongAnimal.hpp"
#include "../incs/WrongCat.hpp"


int main()
{
    std::cout<< WHITE << "===============================test===============================" << RESET << std::endl;

    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << i->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();

    std::cout<< WHITE << "===============================test===============================" << RESET << std::endl;

    const WrongAnimal* metou = new WrongAnimal();
    const WrongAnimal* k = new WrongCat();
    k->makeSound(); //will output the cat sound!
    metou->makeSound();

    std::cout<< WHITE << "===============================destruction===============================" << RESET << std::endl;

    delete meta;
    delete i;
    delete j;
    delete k;
    delete metou;
    return 0;
}
