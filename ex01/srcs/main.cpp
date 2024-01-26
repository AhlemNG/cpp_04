/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 17:00:07 by anouri            #+#    #+#             */
/*   Updated: 2024/01/26 18:04:06 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Animal.hpp"
#include "../incs/Colors.hpp"
#include "../incs/Dog.hpp"
#include "../incs/Cat.hpp"
#include "../incs/Brain.hpp"

int main()
{
    Animal *Tab[10];

    std::cout << MAGENTA << "************************test************************" << RESET << std::endl;
    for (int i = 0; i< 10 ; i++)
    {
        if (i < 4)
            Tab[i] = new Dog();
        else
            Tab[i] = new Cat();
    }
      for (int i = 0; i< 10 ; i++)
        delete Tab[i];
    std::cout << MAGENTA << "************************test************************" << RESET << std::endl;
    Dog *puppy = new Dog();
    puppy->setIdea("Cats are adorable", 0);
    Animal *Rex = new Dog();
    dynamic_cast<Dog*>(Rex)->setIdea("Cats are lazy", 0);
    std::cout << CYAN << "puppy bellives that " << puppy->getIdea(0) << RESET << std::endl;
    delete puppy;
    delete Rex;
    
    return 0;
}

/*dynamic_cast:

It performs conversions that involve polymorphism (typically used with pointers or references to base and derived classes).
It is used for safe downcasting in class hierarchies at runtime.
It performs runtime type checking to ensure that the conversion is valid. If the types are not compatible, dynamic_cast returns a null pointer for pointers or throws a std::bad_cast exception for references.
It requires at least one virtual function in the base class to enable the polymorphic behavior.*/

// int	main() {
// 	std::cout << "__________________________________________" << std::endl;
// 	std::cout << "__________________TEST1___________________" << std::endl;
	
// 	const Animal* j = new Dog();
//     const Animal* i = new Cat();
// 	std::cout << "__________________________________________" << std::endl;
// 	std::cout << "__________________________________________" << std::endl;

//     std::cout << j->getType() << " " << std::endl;
//     std::cout << i->getType() << " " << std::endl;
//     j->makeSound();
//     i->makeSound();
// 	std::cout << "__________________________________________" << std::endl;
//     std::cout << "__________________________________________" << std::endl;

// 	dynamic_cast<Cat*>(const_cast<Animal*>(i))->setIdea("I hate the dogs!", 0);
//     dynamic_cast<Dog*>(const_cast<Animal*>(j))->setIdea("I hate the cats!", 0);
// 	dynamic_cast<Dog*>(const_cast<Animal*>(j))->setIdea("I'm hungry!", 1);
	
// 	std::cout << BLUE << dynamic_cast<Cat*>(const_cast<Animal*>(i))->getIdea(0) << RESET << std::endl;
//     std::cout << BLUE << dynamic_cast<Dog*>(const_cast<Animal*>(j))->getIdea(0) << RESET << std::endl;
// 	std::cout << BLUE << dynamic_cast<Dog*>(const_cast<Animal*>(j))->getIdea(1) << RESET << std::endl;
// 	std::cout << "__________________________________________" << std::endl;
//     std::cout << "__________________________________________" << std::endl;

	
// 	std::cout << "___________seg here_______________________________" << std::endl;
//     const Animal* k = new Dog(*dynamic_cast<const Dog*>(j));

// 	std::cout << k->getType() << " " << std::endl;
	
// 	std::cout << "__________________________________________" << std::endl;
//     std::cout << "__________________________________________" << std::endl;
	
//     std::cout << BLUE << dynamic_cast<Dog*>(const_cast<Animal*>(k))->getIdea(0) << RESET << std::endl;
// 	std::cout << BLUE << dynamic_cast<Dog*>(const_cast<Animal*>(k))->getIdea(1) << RESET << std::endl;
// 	std::cout << "__________________________________________" << std::endl;
//     std::cout << "__________________________________________" << std::endl;
	
// 	delete i, delete j, delete k;
	
// 	std::cout << "__________________________________________" << std::endl;
// 	std::cout << "__________________TEST2___________________" << std::endl;
	
// 	const Animal* meta[4];
	
// 	for (int i = 0; i < 4; i++) {
// 		if (i < 2)
// 			meta[i] = new Cat();
// 		else
// 			meta[i] = new Dog();
// 	}
// 	std::cout << "__________________________________________" << std::endl;
//     std::cout << "__________________________________________" << std::endl;
	
// 	for (int i = 0; i < 4; ++i)
// 		delete meta[i];
		
// 	std::cout << "__________________________________________" << std::endl;
// 	std::cout << "__________________TEST3___________________" << std::endl;
	
// 	Dog* toto = new Dog();
// 	std::cout << "__________________________________________" << std::endl;
// 	std::cout << "__________________________________________" << std::endl;
	
// 	toto->setIdea("Hello!", 0);
//     toto->setIdea("I hate the cats!", 1);
// 	toto->setIdea("I'm hungry!", 2);

    
	
// 	std::cout << BLUE << toto->getIdea(0) << RESET << std::endl;
// 	std::cout << BLUE << toto->getIdea(1) << RESET << std::endl;
// 	std::cout << BLUE << toto->getIdea(2) << RESET << std::endl;
//     std::cout << "__________________________________________" << std::endl;
// 	std::cout << "__________________________________________" << std::endl;

// 	Dog* copyToto = new Dog(*toto);
// 	std::cout << "__________________________________________" << std::endl;
// 	std::cout << "__________________________________________" << std::endl;
	
// 	std::cout << BLUE << copyToto->getIdea(0) << RESET << std::endl;
// 	std::cout << BLUE << copyToto->getIdea(1) << RESET << std::endl;
// 	std::cout << BLUE << copyToto->getIdea(2) << RESET << std::endl;
// 	std::cout << "__________________________________________" << std::endl;
// 	std::cout << "__________________________________________" << std::endl;
	
//     copyToto->setIdea("I like the cats!", 1);
// 	copyToto->setIdea("We gonna playing?", 3);
	
// 	std::cout << BLUE << copyToto->getIdea(0) << RESET << std::endl;
// 	std::cout << BLUE << copyToto->getIdea(1) << RESET << std::endl;
// 	std::cout << BLUE << copyToto->getIdea(2) << RESET << std::endl;
// 	std::cout << BLUE << copyToto->getIdea(3) << RESET << std::endl;
// 	std::cout << "ORIGINAL TOTO's IDEAS" << std:: endl;
// 	std::cout << BLUE << toto->getIdea(0) << RESET << std::endl;
// 	std::cout << BLUE << toto->getIdea(1) << RESET << std::endl;
// 	std::cout << BLUE << toto->getIdea(2) << RESET << std::endl;
//     std::cout << "__________________________________________" << std::endl;
// 	std::cout << "__________________________________________" << std::endl;
	
// 	delete toto, delete copyToto;
	
// 	return 0;
// }