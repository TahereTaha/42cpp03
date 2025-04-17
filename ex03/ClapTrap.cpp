/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatahere <tatahere@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 18:45:09 by tatahere          #+#    #+#             */
/*   Updated: 2025/04/16 17:26:51 by tatahere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <string>
#include <iostream>

void	ClapTrap::initName(std::string name)
{
	this->_name = name;
}

void	ClapTrap::initHitPoints(void)
{
	this->_hitPoints = 10;
}

void	ClapTrap::initEnergyPoints(void)
{
	this->_energyPoints = 10;
}

void	ClapTrap::initAttackDamage(void)
{
	this->_attackDamage = 0;
}

ClapTrap::ClapTrap(void)
{
	std::cout << "ClapTrap default constructor." << std::endl;
	this->initName("no_name");
	this->initHitPoints();
	this->initEnergyPoints();
	this->initAttackDamage();
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap constructor with name." << std::endl;
	this->initName(name);
	this->initHitPoints();
	this->initEnergyPoints();
	this->initAttackDamage();
}

ClapTrap::ClapTrap(const ClapTrap & src)
{
	std::cout << "ClapTrap copy constructor." << std::endl;
	*this = src;
}

ClapTrap & ClapTrap::operator = (const ClapTrap & src)
{
	std::cout << "ClapTrap copy assigment." << std::endl;
	if (this != &src)
	{
		this->_name = src._name;
		this->_hitPoints = src._hitPoints;
		this->_energyPoints = src._energyPoints;
		this->_attackDamage = src._attackDamage;
	}
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destructor" << std::endl;
}

void	ClapTrap::attack(const std::string & target)
{
	std::cout << "ClapTrap attack" << std::endl;
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

void	ClapTrap::takeDamage(unsigned int ammount)
{
	std::cout << "ClapTrap takeDamage" << std::endl;
	std::cout << "\t" << "this is: " << this->_name << std::endl;
	if (this->_hitPoints == 0)
	{
		std::cout << "\t" << "has no hitPoints" << std::endl;
		return ;
	}
	std::cout << "\t" << "takes damage: " << ammount << std::endl;
	if (this->_hitPoints < ammount)
		this->_hitPoints = 0;
	else
		this->_hitPoints -= ammount;
	std::cout << "\t" << "hitPoints remaning: " << this->_hitPoints << std::endl;
	return ;
}

void	ClapTrap::beRepaired(unsigned int ammount)
{
	std::cout << "ClapTrap beRepaired" << std::endl;
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
	std::cout << "\t" << "be repaird: " << ammount << std::endl;
	this->_energyPoints -= 1;
	this->_hitPoints += ammount;
	std::cout << "\t" << "hitPoints remaning: " << this->_hitPoints << std::endl;
	return ;
}
