/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 17:05:56 by marvin            #+#    #+#             */
/*   Updated: 2025/11/22 17:05:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string.h>
#include <iostream>
#include "ICharacter.hpp"

class AMateria;

class Character : public ICharacter
{
    private :
        std::string name;
    public :
        Character();
        Character(const std::string &name);
        ~Character();
        Character(const Character &copy);
        Character &operator=(const Character &copy);
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
        AMateria* amateria[4];
};

#endif