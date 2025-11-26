/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 15:32:21 by marvin            #+#    #+#             */
/*   Updated: 2025/11/12 15:32:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


Cat::Cat() : Animal("Cat")
{
    std::cout << "Cat default constructor called" << std::endl;
    this->_brain = new Brain();
}

Cat::Cat(std::string type) : Animal(type)
{
    std::cout << "Cat parameterized constructor called" << std::endl;
    this->_brain = new Brain();
}

Cat::Cat(const Cat& other) : Animal(other.type)
{
    std::cout << "Cat copy constructor called" << std::endl;
    if (this != &other)
    {
        this->type = other.type;
        this->_brain = new Brain(*(other._brain));
    }
}
Cat& Cat::operator=(const Cat& other)
{
    std::cout << "Cat copy assignment operator called" << std::endl;
    if (this != &other)
    {
        if (this->_brain)
        {
            delete this->_brain;
        }
        this->type = other.type;
        this->_brain = new Brain(*(other._brain));
    }
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    delete this->_brain;
}

void Cat::makeSound() const
{
    std::cout << "Meow Meow!" << std::endl;
}

Brain* Cat::getBrain() const
{
    return this->_brain;
}