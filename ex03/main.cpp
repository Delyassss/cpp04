/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 15:18:05 by marvin            #+#    #+#             */
/*   Updated: 2025/11/25 15:18:05 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"


int main()
{
AMateria *floor[50];
int floor_i = 0;
for (int i = 0; i < 50; i++)
    floor[i] = NULL;
IMateriaSource* src = new MateriaSource();
src->learnMateria(new Ice());
src->learnMateria(new Cure());
ICharacter* me = new Character("me");
AMateria* tmp;
tmp = src->createMateria("ice");
me->equip(tmp);
tmp = src->createMateria("cure");
me->equip(tmp);
ICharacter* bob = new Character("bob");
me->use(0, *bob);
me->use(1, *bob);
me->use(2, *bob);
floor[floor_i++] = tmp;
me->unequip(1);
me->unequip(4);
me->use(3, *bob);
delete bob;
delete me;
delete src;
for (int i = 0; i < floor_i; i++)
{
    if (floor[i])
    delete floor[i];
}
return 0;
}