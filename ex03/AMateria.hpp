/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 14:22:29 by marvin            #+#    #+#             */
/*   Updated: 2025/11/22 14:22:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string.h>
#include <iostream>
#include "ICharacter.hpp"



class AMateria 
{
    protected :
        std::string type;
    public :
        AMateria();
        virtual ~AMateria();
        AMateria(std::string const & type);
        AMateria(const AMateria &copy);
        AMateria &operator=(const AMateria &copy);
        std::string const & getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);

};

#endif