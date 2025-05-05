/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeorges <mgeorges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 11:17:15 by mgeorges          #+#    #+#             */
/*   Updated: 2025/05/05 15:58:44 by mgeorges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//constructeur
ClapTrap::ClapTrap():_name("test"), _hit_points(10), _energy_points(10), _attack_damage(0)
{
    std::cout << "ClapTrap test constructor called" << std::endl;
}
//destructeur
ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called" << std::endl;
}
//Constructeur pour le nom
ClapTrap::ClapTrap(std::string name): _name(name), _hit_points(10), _energy_points(10), _attack_damage(0) {
    std::cout << "ClapTrap constructor for the name" << _name << std::endl;
}
//Opérateur de copie
ClapTrap::ClapTrap(const ClapTrap &copy) {
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = copy;
}
//opérateur d'assignation -> copie les attributs privés vers l'objet courant
ClapTrap& ClapTrap::operator=(const ClapTrap &other) {
    std::cout << "ClapTrap assignation operator called" << std::endl;
    this->_name = other._name;
    this->_hit_points = other._hit_points;
    this->_energy_points = other._energy_points;
    this->_attack_damage = other._attack_damage;
    return *this;
}

//fonction qui retire des points de vie et ajoute des messages lors des attaques
void ClapTrap::attack(const std::string& target) {
    if (this->_energy_points > 0 && this->_hit_points > 0)
    {
        std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
        this->_energy_points--;
    }
    else if (this->_energy_points <= 0)
        std::cout << "ClapTrap " << this->_name << " can't do any action, no more energy points left!" << std::endl;
    else
        std::cout << "ClapTrap " << this->_name << " can't do any action, not enough hit points left!" << std::endl;
}

//fonction qui gère lorsque ClapTrap recoit des dégats
void ClapTrap::takeDamage(unsigned int amount) {
    if (this->_hit_points > amount)
        this->_hit_points -= amount;
    else if (this->_hit_points >= 0)
        this->_hit_points = 0;
    else
    {
        std::cout << "ClapTrap " << this->_name << " is already dead." << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->_name << " was attacked and lost " << amount << " hit points, and now have " << this->_hit_points << " hit points!" << std::endl;
}

//fonction qui rajoute des points d'énergie avec certaine condition pas + de 10 PV et pas pts d'energie a 0 et PV a 0 non plus
void ClapTrap::beRepaired(unsigned int amount) {
    if (this->_energy_points > 0 && this->_hit_points > 0 && this->_hit_points + amount <= 10)
    {
        this->_hit_points += amount;
        std::cout << "ClapTrap " << this->_name << "gained " << amount << "hit points, and have " << this->_hit_points << " hit points." << std::endl;
        this->_energy_points--;
    }
    else if (this->_energy_points == 0)
        std::cout << "ClapTrap " << this->_name << " can't be repaired, not enough energy points!" << std::endl;
    else if (this->_hit_points == 0)
        std::cout << "ClapTrap " << this->_name << " can't be repaired, not enough hit points!" << std::endl;
    else
        std::cout << "ClapTrap " << this->_name << " cant have more than 10PV!" << std::endl;       
}
