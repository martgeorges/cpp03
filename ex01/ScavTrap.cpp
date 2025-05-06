/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeorges <mgeorges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 07:51:11 by mgeorges          #+#    #+#             */
/*   Updated: 2025/05/06 10:51:06 by mgeorges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

//constructeur
ScavTrap::ScavTrap(): ClapTrap() {
    std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    this->_hit_points = 100;
    this->_energy_points = 100;
    this->_attack_damage = 30;
    std::cout << "ScavTrap name constructor called for " << this->_name << std::endl;
}

//destructeur
ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap destructor called" << std::endl;
}

//opérateur de copie
ScavTrap::ScavTrap(const ScavTrap &copy) {
    std::cout << "ScavTrap Copy constructor called" << std::endl;
    *this = copy;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &other) {
    std::cout << "ScavTrap Assignation operator called" << std::endl;
    this->_name = other._name;
    this->_hit_points = other._hit_points;
    this->_energy_points = other._energy_points;
    this->_attack_damage = other._attack_damage;
    return *this;
}

void ScavTrap::guardGate() {
    
}