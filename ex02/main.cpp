/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeorges <mgeorges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 10:26:02 by mgeorges          #+#    #+#             */
/*   Updated: 2025/05/07 14:15:33 by mgeorges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void) {
	std::cout << "\033[34m---- CONSTRUCTEURS ----\033[0m" << std::endl;
	ClapTrap clap1("clap1");
	FragTrap frag1("frag1");
	FragTrap frag2;
	FragTrap fragclone(frag1);

	std::cout << std::endl << "\033[34m---- ACTIONS VALIDES ----\033[0m" << std::endl;
	clap1.attack("frag1");
	frag1.attack("clap1");
	frag1.takeDamage(2);
	frag1.beRepaired(1);
	frag1.highFivesGuys();

	std::cout << std::endl << "\033[34m---- ACTIONS INVALIDES ----\033[0m" << std::endl;
	frag1.takeDamage(100);
	frag1.attack("clap1");
	frag1.takeDamage(2);
	frag1.beRepaired(2);
	frag1.highFivesGuys();

	for (int i = 0; i < 101; i++) {
		fragclone.attack("clap1");
	}

	std::cout << std::endl << "\033[34m---- DESTRUCTEURS ----\033[0m" << std::endl;
	return 0;
}