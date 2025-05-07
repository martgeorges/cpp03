/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeorges <mgeorges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 11:16:37 by mgeorges          #+#    #+#             */
/*   Updated: 2025/05/07 14:09:53 by mgeorges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) {
	std::cout << "\033[34m---- CONSTRUCTEURS ----\033[0m" << std::endl;
	ClapTrap clap1("dog");
	ClapTrap clap2("cat");
	ClapTrap clap3("fox");
	ClapTrap clap4("mouse");
	ClapTrap clap5;
	ClapTrap clap6(clap4);
	ClapTrap clap7 = clap3;

	std::cout << std::endl << "\033[1;32m---- ACTIONS VALIDES ----\033[0m" << std::endl;
	clap1.attack("cat");
	clap2.takeDamage(2);
	clap3.beRepaired(1);

	std::cout << std::endl << "\033[1;31m---- ACTIONS INVALIDES ----\033[0m" << std::endl;
	clap1.takeDamage(10);
	clap1.beRepaired(10);
    for (int i = 0; i < 11; ++i)
        clap2.attack("dog");
    
	std::cout << std::endl << "\033[34m---- DESTRUCTEURS ----\033[0m" << std::endl;
	return 0;
}