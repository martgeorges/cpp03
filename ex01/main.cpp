/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeorges <mgeorges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 11:16:37 by mgeorges          #+#    #+#             */
/*   Updated: 2025/05/07 11:43:54 by mgeorges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void) {
    std::cout << "\033[34m---- CONSTRUCTEURS ----\033[0m" << std::endl;
    ScavTrap scav1;
    ScavTrap guardian("Guardian");
    ScavTrap scav3;
    ScavTrap copy(guardian);
    ScavTrap assigned;
    assigned = guardian;
    ScavTrap outOfGas("outOfGas");

    std::cout << std::endl << "\033[1;32m---- ACTIONS VALIDES ----\033[0m" << std::endl;
    guardian.guardGate();
    scav3 = guardian;
    scav3.attack("Enemy");
    copy.guardGate();
    assigned.guardGate();

    std::cout << std::endl << "\033[1;31m---- ACTIONS INVALIDES / LIMITES ----\033[0m" << std::endl;
    for (int i = 0; i < 101; ++i)
        outOfGas.guardGate(); // Boucle jusqu'à plus d'énergie

    std::cout << std::endl << "\033[34m---- DESTRUCTEURS ----\033[0m" << std::endl;
    return 0;
}
