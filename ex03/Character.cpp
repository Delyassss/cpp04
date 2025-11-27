/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 17:05:54 by marvin            #+#    #+#             */
/*   Updated: 2025/11/22 17:05:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"


Character::Character() : name("default")
{
    std::cout << "Character default constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
        amateria[i] = NULL;
}
Character::Character(const std::string& name) : name(name)
{
    std::cout << "Character parameterized constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
        amateria[i] = NULL;
}
Character::~Character()
{
    std::cout << "Character destructor called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (amateria[i] != NULL)
        {
            delete amateria[i];
        }
    }
}

Character::Character(const Character &character)
{
    this->name = character.name;
        for (int i = 0; i < 4; i++)
        {
            if (character.amateria[i])
            {
                this->amateria[i] = character.amateria[i]->clone();
            }
            else
            {
                this->amateria[i] = NULL;
            }
        }
}

Character &Character::operator=(const Character &character)
{
    if (this != &character)
    {
    this->name = character.name;
    for (int i=0; i < 4; i++)
    {
        if (this->amateria[i])
        {
            delete this->amateria[i];
        }
    }
     for (int i = 0; i < 4; i++)
        {
            if (character.amateria[i])
            {
                this->amateria[i] = character.amateria[i]->clone();
            }
            else
            {
                this->amateria[i] = NULL;
            }
        }
    }
        return (*this);
}

void Character::equip(AMateria* m)
{
    if (m == NULL)
        return ;
    for (int i = 0; i < 4; i++)
    {
        if (this->amateria[i] == NULL)
        {
            for (int j = 0; j < 4; j++)
            {
                if (this->amateria[j] == m)
                    return ;
            }
            this->amateria[i] = m;
            return;
        }
    }
}

void Character::unequip(int index)
{
    if (index >= 0 && index <= 3)
    {
        this->amateria[index] = NULL;
        return;
    }
}

void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx > 3 )
    {
        return ;
    }
    if (this->amateria[idx] == NULL)
    {
        return;
    }
    this->amateria[idx]->use(target);
}

std::string const &Character::getName() const
{
    return (this->name);
}






