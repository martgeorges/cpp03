/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeorges <mgeorges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 07:51:11 by mgeorges          #+#    #+#             */
/*   Updated: 2025/05/07 15:03:14 by mgeorges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

//constructeur
ScavTrap::ScavTrap(): ClapTrap() {
    this->_hit_points = 100;
    this->_energy_points = 100;
    this->_attack_damage = 30;
    std::cout << "\033[33mScavTrap Default constructor called\033[0m" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    this->_hit_points = 100;
    this->_energy_points = 100;
    this->_attack_damage = 30;
    std::cout << "\033[33mScavTrap name constructor called for \033[0m" << this->_name << std::endl;
}

//destructeur
ScavTrap::~ScavTrap() {
    std::cout << "\033[33mScavTrap destructor called\033[0m" << std::endl;
}

//opérateur de copie
ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy) {
    std::cout << "\033[33mScavTrap " << copy._name << " copy constructor called\033[0m" << std::endl;
    *this = copy;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &other) {
    std::cout << "\033[33mScavTrap Assignment operator called\033[0m" << std::endl;
    this->_name = other._name;
    this->_hit_points = other._hit_points;
    this->_energy_points = other._energy_points;
    this->_attack_damage = other._attack_damage;
    return *this;
}

//fonction qui retire des points de vie et ajoute des messages lors des attaques
void ScavTrap::attack(const std::string& target) {
    if (this->_energy_points > 0 && this->_hit_points > 0)
    {
        std::cout << "\033[33mScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!\033[0m" << std::endl;
        this->_energy_points--;
    }
    else if (this->_energy_points <= 0)
        std::cout << "\033[31mScavTrap " << this->_name << " can't do any action, no more energy points left!\033[0m" << std::endl;
    else
        std::cout << "\033[31mClapTrap " << this->_name << " can't do any action, not enough hit points left!\033[0m" << std::endl;
}

void ScavTrap::guardGate() {
    if (this->_energy_points == 0)
    {
        std::cout << "\033[31mScavTrap " << this->_name << " not able to do any action, no energy left!\033[0m" << std::endl;
        return;
    }
    else if (this->_hit_points == 0)
    {
        std::cout << "\033[31mScavTrap " << this->_name << " not able to do any action, no PV left!\033[0m" << std::endl;
    }
    std::cout << "\033[32mScavTrap " << this->_name << " is now in gate keeper mode\033[0m" << std::endl;
    this->_energy_points--;
}