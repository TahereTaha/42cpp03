/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatahere <tatahere@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 18:45:09 by tatahere          #+#    #+#             */
/*   Updated: 2025/04/17 13:39:39 by tatahere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include <string>
#include <iostream>

void	DiamondTrap::initName(std::string name)
{
	this->_name = name + "_clap_name";
}

void	DiamondTrap::initHitPoints(void)
{
	FragTrap::initHitPoints();
}

void	DiamondTrap::initEnergyPoints(void)
{
	ScavTrap::initEnergyPoints();
}

void	DiamondTrap::initAttackDamage(void)
{
	FragTrap::initAttackDamage();
}

DiamondTrap::DiamondTrap(void) : ClapTrap()
{
	std::cout << "DiamondTrap default constructor." << std::endl;
	this->initName("no_name");
	this->initHitPoints();
	this->initEnergyPoints();
	this->initAttackDamage();
	std::cout << "name: " << this->_name << std::endl;
	std::cout << "hitpoints: " << this->_hitPoints << std::endl;
	std::cout << "energy: " << this->_energyPoints << std::endl;
	std::cout << "damage: " << this->_attackDamage << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name)
{
	std::cout << "DiamondTrap constructor with name." << std::endl;
	this->initName("no_name");
	this->initHitPoints();
	this->initEnergyPoints();
	this->initAttackDamage();
	std::cout << "name: " << this->_name << std::endl;
	std::cout << "hitpoints: " << this->_hitPoints << std::endl;
	std::cout << "energy: " << this->_energyPoints << std::endl;
	std::cout << "damage: " << this->_attackDamage << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap & src) : ClapTrap(src), ScavTrap(src), FragTrap(src)
{
	std::cout << "DiamondTrap copy constructor." << std::endl;
	*this = src;
}

DiamondTrap & DiamondTrap::operator = (const DiamondTrap & src)
{
	std::cout << "DiamondTrap copy assigment." << std::endl;
	if (this != &src)
	{
		this->_name = src._name;
		this->_hitPoints = src._hitPoints;
		this->_energyPoints = src._energyPoints;
		this->_attackDamage = src._attackDamage;
	}
	return (*this);
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap destructor" << std::endl;
}
