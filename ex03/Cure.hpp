/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 14:50:39 by marvin            #+#    #+#             */
/*   Updated: 2025/11/22 14:50:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"


class Cure : public AMateria
{    
    public :
        Cure();
        ~Cure();
        Cure(const Cure &copy);
        Cure &operator=(const Cure &copy);
        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif