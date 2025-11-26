/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 15:24:26 by marvin            #+#    #+#             */
/*   Updated: 2025/11/22 15:24:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    std::cout << "Ice default constructor called" << std::endl;
}
Ice::~Ice()
{
    std::cout << "Ice destructor called" << std::endl;
}
Ice::Ice(const Ice &copy) : AMateria("ice")
{
    std::cout << "Ice copy constructor called" << std::endl;
    if (this != &copy)
    {
        *this = copy;
    }
}
Ice &Ice::operator=(const Ice &copy)
{
    std::cout << "Ice assignment operator called" << std::endl;
    if (this != &copy)
    {
        this->type = copy.type;
    }
    return (*this);
}
AMateria *Ice::clone() const 
{
    AMateria *newIce = new Ice();
    return (newIce);
}
void Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}