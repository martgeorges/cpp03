/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeorges <mgeorges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 11:16:37 by mgeorges          #+#    #+#             */
/*   Updated: 2025/05/07 13:52:55 by mgeorges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) {
    std::cout << "\033[34m---- CONSTRUCTEURS ----\033[0m" << std::endl;
    ClapTrap attacker("Attacker");
    ClapTrap fragile("Fragile");
    ClapTrap healer("Healer");
    ClapTrap repairTester("RepairTester");
    ClapTrap original("Original");
    ClapTrap copy(original);
    ClapTrap assigned;
    assigned = original;

    std::cout << std::endl << "\033[1;32m---- ACTIONS VALIDES ----\033[0m" << std::endl;
    attacker.attack("idiot");
    fragile.takeDamage(5);
    healer.takeDamage(1);
    healer.beRepaired(2);
    repairTester.takeDamage(3);
    repairTester.beRepaired(3);
    copy.attack("CopyTarget");
    assigned.attack("AssignedTarget");

    std::cout << std::endl << "\033[1;31m---- ACTIONS INVALIDES / LIMITES ----\033[0m" << std::endl;
    // Attacker vide son énergie
    for (int i = 0; i < 11; ++i)
        attacker.attack("idiot");

    //Fragile meurt et tente d'agir
    fragile.beRepaired(5);

    // RepairTester dépasse le max de PV pour tester le message d'erreur
    for (int i = 0; i < 10; ++i)
        repairTester.beRepaired(1);

    std::cout << std::endl << "\033[34m---- DESTRUCTEURS ----\033[0m" << std::endl;
    return 0;
}
