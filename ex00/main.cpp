/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatahere <tatahere@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 19:39:36 by tatahere          #+#    #+#             */
/*   Updated: 2025/04/14 19:55:04 by tatahere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int	main(void){

    ClapTrap    AAAA("AAAA");
    ClapTrap    BBBB("BBBB");

    for (int i = 0; i < 12; i++)
        AAAA.attack("Bot 1");
    AAAA.beRepaired(1000);
    for (int i = 0; i < 3; i++)
        AAAA.takeDamage(6);
    BBBB.beRepaired(10);
    BBBB.takeDamage(15);
    BBBB.takeDamage(15);
    BBBB.beRepaired(10);
    return (0);

}
