/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 15:33:16 by marvin            #+#    #+#             */
/*   Updated: 2025/11/12 15:33:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog default constructor called" << std::endl;
    this->_brain = new Brain();
}

Dog::Dog(std::string type) : Animal(type)
{
    std::cout << "Dog parameterized constructor called" << std::endl;
    this->_brain = new Brain();
}

Dog::Dog(const Dog& other) : Animal(other.type)
{
    std::cout << "Dog copy constructor called" << std::endl;
    if (this != &other)
    {
        this->type = other.type;
        this->_brain = new Brain(*(other._brain));
    }
}

Dog &Dog::operator=(const Dog& other)
{
    std::cout << "Dog copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->type = other.type;
        if (this->_brain)
        {
            delete (this->_brain);
        }
        this->_brain = new Brain(*(other._brain));

    }
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
    if (this->_brain)
        delete this->_brain;
}

void Dog::makeSound() const
{
    std::cout << "Woof Woof!" << std::endl;
}

Brain* Dog::getBrain() const
{
    return this->_brain;
}



