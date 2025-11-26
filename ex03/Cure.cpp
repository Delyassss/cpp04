/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 14:50:36 by marvin            #+#    #+#             */
/*   Updated: 2025/11/22 14:50:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
    std::cout << "Cure default constructor called" << std::endl;
}

Cure::~Cure()
{
    std::cout << "Cure destructor called" << std::endl;
}

Cure::Cure(const Cure &copy) : AMateria("cure")
{
    std::cout << "Cure copy constructor called" << std::endl;
    if (this != &copy)
    {
        *this = copy;
    }
}

Cure &Cure::operator=(const Cure &copy)
{
    std::cout << "Cure assignment operator called" << std::endl;
    if (this != &copy)
    {
        this->type = copy.type;
    }
    return (*this);
}

AMateria *Cure::clone() const 
{
    AMateria *newCuer = new Cure();
    return (newCuer);
}

void Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}



