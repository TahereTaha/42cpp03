/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatahere <tatahere@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 18:45:09 by tatahere          #+#    #+#             */
/*   Updated: 2025/04/15 18:09:30 by tatahere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include <string>
#include <iostream>

FragTrap::FragTrap(void)
{
	std::cout << "FragTrap default constructor." << std::endl;
	this->_name = "no name";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "FragTrap constructor with name." << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap & src) : ClapTrap(src)
{
	std::cout << "FragTrap copy constructor." << std::endl;
	*this = src;
}

FragTrap & FragTrap::operator = (const FragTrap & src)
{
	std::cout << "FragTrap copy assigment." << std::endl;
	if (this != &src)
	{
		this->_name = src._name;
		this->_hitPoints = src._hitPoints;
		this->_energyPoints = src._energyPoints;
		this->_attackDamage = src._attackDamage;
	}
	return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor" << std::endl;
}

void		FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap highFivesGuys" << std::endl;
	std::cout << "\t" << "this is: " << this->_name << std::endl;
	if (this->_hitPoints == 0)
	{
		std::cout << "\t" << "has no hitPoints" << std::endl;
		return ;
	}
	if (this->_energyPoints == 0)
	{
		std::cout << "\t" << "has no energyPoints" << std::endl;
		return ;
	}
	this->_energyPoints -= 1;
	std::cout << "\t" << "it requests a high five: " << std::endl;
	return ;
}
