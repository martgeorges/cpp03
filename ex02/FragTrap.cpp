/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeorges <mgeorges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 10:27:30 by mgeorges          #+#    #+#             */
/*   Updated: 2025/05/07 15:23:07 by mgeorges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

//constructor function
FragTrap::FragTrap() : ClapTrap()
{
    this->_hit_points = 100;
    this->_energy_points = 100;
    this->_attack_damage = 30;
    std::cout << "\033[33mFragTrap Default constructor called \033[0m" << std::endl;
}

//name constructor function
FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    this->_hit_points = 100;
    this->_energy_points = 100;
    this->_attack_damage = 30;
    std::cout << "\033[33mFragTrap name constructor called \033[0m" << this->_name << std::endl;
}

//destructor called
FragTrap::~FragTrap() {
    std::cout << "\033[33mFragTrap destructor called\033[0m" << std::endl;
}

//copy constructor called
FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy) {
    std::cout << "\033[33mFragTrap " << copy._name << " copy constructor called\033[0m" << std::endl;
    *this = copy;
}

//Assignment operator called 
FragTrap& FragTrap::operator=(const FragTrap &other) {
    std::cout << "\033[33mScavTrap Assignment operator called\033[0m" << std::endl;
    this->_name = other._name;
    this->_hit_points = other._hit_points;
    this->_energy_points = other._energy_points;
    this->_attack_damage = other._attack_damage;
    return *this;
}

//request a positive high five!! and do some checks
void FragTrap::highFivesGuys(void) {
    if (this->_energy_points == 0)
    {
        std::cout << "\033[31mFragTrap " << this->_name << " can't do action it has no more energy!\033[0m" << std::endl;
        return ;
    }
    else if (this->_hit_points == 0)
    {
        std::cout << "\033[31mFragTrap " << this->_name << " can't do action, because he is dead!\033[0m" << std::endl;
        return ;
    }
    std::cout << "\033[32mFragTrap " << this->_name << " requested a Highfive!\033[0m" << std::endl;
    this->_energy_points--;
}