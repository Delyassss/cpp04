/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 21:54:41 by marvin            #+#    #+#             */
/*   Updated: 2025/11/18 21:54:41 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main()
{
    int size = 10;
    Animal *animals[size];

    for (int i = 0 ; i < size ; i++)
    {
        if (i < size / 2 )
        {
            animals[i] = new Dog();
        }
        else
        {
            animals[i] = new Cat();
        }
    }
    for (int i = 0 ; i < size ; i++)
    {
        animals[i]->makeSound();
        delete animals[i];
    }
    std::cout << "---------------------------------- Brain Test ----------------------------------" << std::endl;
    Dog *dog = new Dog();
    dog->getBrain()->setIdea(0, "I want to play");
    dog->getBrain()->setIdea(1, "I am hungry");
    std::cout << "Dog's ideas:" << std::endl;
    std::cout << dog->getBrain()->getIdea(0) << std::endl;
    std::cout << dog->getBrain()->getIdea(1) << std::endl;
    std::cout << "Creating a copy of the dog..." << std::endl;
    Dog *copyDog = new Dog(*dog);
    delete dog;
    std::cout << "Copy Dog's ideas:" << std::endl;
    std::cout << copyDog->getBrain()->getIdea(0) << std::endl;
    std::cout << copyDog->getBrain()->getIdea(1) << std::endl;
    std::cout << "Modifying the copy dog's ideas..." << std::endl;
    copyDog->getBrain()->setIdea(0, "I want a bone");
    copyDog->getBrain()->setIdea(1, "I am very hungry");
    std::cout << "Modified Copy Dog's ideas:" << std::endl;
    std::cout << copyDog->getBrain()->getIdea(0) << std::endl;
    std::cout << copyDog->getBrain()->getIdea(1) << std::endl;
    delete copyDog;


    return 0;
}