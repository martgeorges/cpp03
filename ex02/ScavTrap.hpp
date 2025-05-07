/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeorges <mgeorges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 07:51:00 by mgeorges          #+#    #+#             */
/*   Updated: 2025/05/07 10:14:47 by mgeorges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(const ScavTrap &copy);
        ~ScavTrap();
        ScavTrap & operator = (const ScavTrap &other);
        
        ScavTrap(std::string name);

        void    attack(const std::string& target);
        void    guardGate();
};


#endif