/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 14:22:26 by marvin            #+#    #+#             */
/*   Updated: 2025/11/22 14:22:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"


AMateria::AMateria() : type("default")
{
    std::cout << "AMateria default constructor called" << std::endl;
}
AMateria::~AMateria()
{
    std::cout << "AMateria destructor called" << std::endl;
}

AMateria::AMateria(std::string const & type) : type(type)
{
    std::cout << "AMateria parameterized constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &copy)
{
    std::cout << "AMateria copy constructor called" << std::endl;
    if (this != &copy)
    {
        *this = copy;
    }
}

AMateria &AMateria::operator=(const AMateria &copy)
{
    std::cout << "AMateria assignment operator called" << std::endl;
    if (this != &copy)
    {
        this->type = copy.type;
    }
    return (*this);
}

std::string const & AMateria::getType() const
{
    return (this->type);
}

void AMateria::use(ICharacter& target)
{
    (void)target;
    std::cout << "A generic material does nothing !" << std::endl;
}

