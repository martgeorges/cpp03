/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeorges <mgeorges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 11:17:15 by mgeorges          #+#    #+#             */
/*   Updated: 2025/05/03 10:58:07 by mgeorges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap():_name("default"), _hit_points(10), _energy_points(10), _attack_damage(0)
{
    std::cout << "Constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hit_points(10), _energy_points(10), _attack_damage(0) {
    std::cout << "Constructor for the name" << _name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy) {
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other) {
    std::cout << "Assignation operator called" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
    
}

void ClapTrap::takeDamage(unsigned int amount) {
    
}

void ClapTrap::beRepaired(unsigned int amount) {
    
}