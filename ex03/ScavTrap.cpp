/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatahere <tatahere@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 18:45:09 by tatahere          #+#    #+#             */
/*   Updated: 2025/04/16 18:26:07 by tatahere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <string>
#include <iostream>

void	ScavTrap::initHitPoints(void)
{
	this->_hitPoints = 100;
}

void	ScavTrap::initEnergyPoints(void)
{
	this->_energyPoints = 50;
}

void	ScavTrap::initAttackDamage(void)
{
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "ScavTrap default constructor." << std::endl;
	this->initName("no_name");
	this->initHitPoints();
	this->initEnergyPoints();
	this->initAttackDamage();
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap constructor with name." << std::endl;
	this->initName(name);
	this->initHitPoints();
	this->initEnergyPoints();
	this->initAttackDamage();
}

ScavTrap::ScavTrap(const ScavTrap & src) : ClapTrap(src)
{
	std::cout << "ScavTrap copy constructor." << std::endl;
	*this = src;
}

ScavTrap & ScavTrap::operator = (const ScavTrap & src)
{
	std::cout << "ScavTrap copy assigment." << std::endl;
	if (this != &src)
	{
		this->_name = src._name;
		this->_hitPoints = src._hitPoints;
		this->_energyPoints = src._energyPoints;
		this->_attackDamage = src._attackDamage;
	}
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor" << std::endl;
}

void	ScavTrap::attack(const std::string & target)
{
	std::cout << "ScavTrap attack" << std::endl;
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
	std::cout << "\t" << "it attacks: " << target << std::endl;
	return ;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap guardGate" << std::endl;
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
	std::cout << "\t" << "it attacks: " << std::endl;
	return ;
}
