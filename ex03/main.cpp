/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatahere <tatahere@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 19:39:36 by tatahere          #+#    #+#             */
/*   Updated: 2025/04/15 21:41:32 by tatahere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

//int	main(void){
//
//    ClapTrap    AAAA("AAAA");
//    ClapTrap    BBBB("BBBB");
//
//    for (int i = 0; i < 12; i++)
//        AAAA.attack("Bot 1");
//    AAAA.beRepaired(1000);
//    for (int i = 0; i < 3; i++)
//        AAAA.takeDamage(6);
//    BBBB.beRepaired(10);
//    BBBB.takeDamage(15);
//    BBBB.takeDamage(15);
//    BBBB.beRepaired(10);
//    return (0);
//
//}

//int	main(void){
//    
//    ScavTrap    scav1("Scav 1");
//    ScavTrap    scav2("Scav 2");
//    ScavTrap    scav3;
//
//    for (int i = 0; i < 4; i++)
//        scav1.attack("Random enemy 1");
//    scav1.beRepaired(10);
//    for (int i = 0; i < 3; i++)
//        scav1.takeDamage(90);
//    scav2.beRepaired(10);
//    scav2.takeDamage(15);
//    scav2.takeDamage(15);
//    scav2.beRepaired(10);
//
//    scav2.guardGate();
//
//    //scav3 = scav1;
//    scav3.attack( "Random enemy 2");
//
//    scav3.guardGate();
//    
//    ClapTrap    Clappy;
//    Clappy.attack("Clappy2");
//    Clappy.takeDamage(10);
//    Clappy.beRepaired(100);
//    return (0);
//
//}

//int	main(void){
//    
//    FragTrap    frag1("Frag 1");
//    ScavTrap    scav2("Scav 2");
//    ScavTrap    scav3;
//
//    for (int i = 0; i < 4; i++)
//        frag1.attack("Bot 1");
//    frag1.beRepaired(10);
//    frag1.highFivesGuys();
//    for (int i = 0; i < 3; i++)
//        frag1.takeDamage(90);
//    frag1.highFivesGuys();
//    scav2.beRepaired(10);
//    scav2.takeDamage(15);
//    scav2.takeDamage(15);
//    scav2.beRepaired(10);
//    return (0);
//}

int	main(void)
{
    DiamondTrap	Diamond1;
	return (0);
	DiamondTrap	Diamond2("TEST");
    DiamondTrap	Diamond3(Diamond2);

	Diamond2.guardGate();
	Diamond2.highFivesGuys();


    for (int i = 0; i < 5; i++)
        Diamond2.attack("111111");
    Diamond2.beRepaired(20);


    Diamond3.attack("111111");
    Diamond3.takeDamage(10000);
    Diamond3.beRepaired(20);
    Diamond2.beRepaired(20);

//    Diamond2.whoAmI();
//    Diamond3.whoAmI();
}
