/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 12:07:46 by marvin            #+#    #+#             */
/*   Updated: 2025/11/25 12:07:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    std::cout << "MateriaSource default constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        this->materia[i] = NULL;
    }
}

MateriaSource::~MateriaSource()
{
    std::cout << "MateriaSource destructor called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (this->materia[i])
        {
            delete this->materia[i];
        }
    }
}
MateriaSource::MateriaSource(const MateriaSource &copy)
{
    std::cout << "MateriaSource copy constructor called" << std::endl;
    *this = copy;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &copy)
{
    if (this != &copy)
    {
        for (int i = 0; i < 4 ; i++)
        {
            if (this->materia[i] != NULL)
            {
                delete this->materia[i];
            }
            if (copy.materia[i])
            {
                this->materia[i] = copy.materia[i]->clone();
            }
            else
            {
                this->materia[i] = NULL;
            }
        }
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria * m)
{
    for (int i=0; i < 4; i++)
    {
        if (!this->materia[i])
        {
            this->materia[i] = m;
            return ;
        }
    }
    delete m;// the eventory is full so just delete m here but check if someone else did that
}

AMateria *MateriaSource::createMateria(std::string const & type)
{
    if (type == "")
    {
        return NULL;
    }
    for (int i = 0; i < 4 ; i++)
    {
        if (this->materia[i] && this->materia[i]->getType() == type)
        {
            AMateria *newone = this->materia[i]->clone();
            return newone;
        }
    }
    return NULL;
}