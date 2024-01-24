#include "../incs/Animal.hpp"
#include "../incs/Colors.hpp"
#include "../incs/Dog.hpp"
#include "../incs/Cat.hpp"
#include "../incs/WrongAnimal.hpp"
#include "../incs/WrongCat.hpp"

// int main()
// {
//     Animal unKnown;
//     Dog doggy;
//     Cat mimi;
//     std::cout<< RED << doggy.getType() << std::endl;
//     doggy.makeSound();
//     std::cout << RED << mimi.getType() << std::endl;
//     mimi.makeSound();
//     return (0);
// }

int main()
{
    const WrongAnimal* meta = new WrongAnimal();
    const WrongAnimal* i = new WrongCat();

    // const Animal* meta = new Animal();
    // const Animal* j = new Dog();
    // const Animal* i = new Cat();
    // std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    // j->makeSound();
    meta->makeSound();
    delete meta;
    delete i;
    // delete j;
    return 0;
}
