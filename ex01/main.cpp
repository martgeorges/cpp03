/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeorges <mgeorges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 11:16:37 by mgeorges          #+#    #+#             */
/*   Updated: 2025/05/06 09:13:51 by mgeorges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    //boucle pour tester jusqu'a 0 PV et voir ce que ca fait 
    /*std::cout << "\n\033[34m=== Test 1: Attaque jusqu'à épuisement d'énergie ===\033[0m" << std::endl;
    ClapTrap a("Attacker");
    for (int i = 0; i < 12; ++i)
        a.attack("Dummy");
    
    std::cout << "\n\033[34m=== Test 2: Mort et actions impossibles ===\033[0m" << std::endl;
    ClapTrap b("Fragile");
    b.takeDamage(10);
    b.attack("Nobody");
    b.beRepaired(3);
    //testeur lorsque 
    std::cout << "\n\033[34m=== Test 3: Reparation avec PV pratiquement au max ===\033[0m" << std::endl;
    ClapTrap c("Healer");
    c.takeDamage(1);
    c.beRepaired(2);
    c.beRepaired(1);
    //testeur pour voir ce qui se passe quand on dépasse les pv et qu'on continue a réparer au dela
    std::cout << "\n\033[34m=== Test 4: Max PV dépassé et réparation ===\033[0m" << std::endl;
    ClapTrap d("RepairTester");
    d.takeDamage(5);
    for (int i = 0; i < 11; ++i)
        d.beRepaired(1); //répare PV 1 par 1
    //testeur pour les opérateur de copie et d'assignation 
    std::cout << "\n\033[34m=== Test 5: testeur opérateur de copie et d'assignation ===\033[0m" << std::endl;
    ClapTrap e("Original");
    e.attack("Target");
    ClapTrap f(e);
    ClapTrap g;
    g = e;
    f.attack("CopyTarget");
    g.attack("AssignedTarget");*/
    return 0;
}