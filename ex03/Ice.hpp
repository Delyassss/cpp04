/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 14:51:47 by marvin            #+#    #+#             */
/*   Updated: 2025/11/22 14:51:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP


#include "AMateria.hpp"


class Ice : public AMateria
{
    public :
        Ice();
        ~Ice();
        Ice(const Ice &copy);
        Ice &operator=(const Ice &copy);
        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif