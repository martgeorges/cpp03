/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeorges <mgeorges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 11:16:37 by mgeorges          #+#    #+#             */
/*   Updated: 2025/05/07 10:13:44 by mgeorges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    //test1 : création d'un scavtrap par défaut
    std::cout << "\n\033[34m\n--- Test 1: Default Constructor ---\033[0m" << std::endl;
    ScavTrap scav1;

    //test 2: création ScavTrap + appel a guard gate pour tester
    std::cout << "\n\033[34m\n--- Test 2: Name constructor + guardGate ---\033[0m" << std::endl;
    ScavTrap scav2("Guardian");
    scav2.guardGate();

    //test 3: test de l'opérateur d'assignation
    std::cout << "\n\033[34m\n--- Test 3: Assignment operator ---\033[0m" << std::endl;
    ScavTrap scav3;
    scav3 = scav2;
    scav3.attack("Enemy");

    //test 4: test du copy constructor
    std::cout << "\n\033[34m\n--- Test 4: copy constructor test ---\033[0m" << std::endl;
    ScavTrap scav4(scav2);
    scav4.guardGate();

    //test 5: boucle jusqu'a ce qu'il n'y ai plus d'energie, et puis on test guardgate
    std::cout << "\n\033[34m\n--- Test 5: loop to check when no energy left ---\033[0m" << std::endl;
    ScavTrap scav5("outOfGas");
    for (int i = 0; i < 101; ++i) {
        scav5.guardGate();
    }
    
    return 0;
}