/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bouh <mel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 04:36:00 by mel-bouh          #+#    #+#             */
/*   Updated: 2025/03/05 20:07:57 by mel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap Default constructor called" << std::endl;
	Name = "";
	HitPoints = 10;
	EnergyPoints = 10;
	AttackDamage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap " << name << " is created" << std::endl;
	Name = name;
	HitPoints = 10;
	EnergyPoints = 10;
	AttackDamage = 0;
}

ClapTrap::ClapTrap(ClapTrap& a)
{
	std::cout << "ClapTrap " << Name << " Copy constructor called" << std::endl;
	*this = a;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << Name << " is destroyed" << std::endl;
}

ClapTrap& ClapTrap::operator=(ClapTrap& a)
{
	if (this == &a)
		return *this;
	std::cout << "ClapTrap " << Name << " Assignment constructor called" << std::endl;
	Name = a.Name;
	HitPoints = a.HitPoints;
	EnergyPoints = a.EnergyPoints;
	AttackDamage = a.AttackDamage;
	return *this;
}

void	ClapTrap::attack(const std::string& target)
{
	if (HitPoints <= 0)
	{
		std::cout << "ClapTrap " << Name << " is " << RED << "DEAD" << RESET << std::endl;
		return;
	}
	if (EnergyPoints <= 0)
	{
		std::cout << "ClapTrap " << Name << " has no energy left" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << Name << " attack " << target << ", causing " << AttackDamage << " points of damage!" << std::endl;
	EnergyPoints--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (HitPoints <= 0)
	{
		std::cout << "ClapTrap " << Name << " is " << RED << "DEAD" << RESET << std::endl;
		return;
	}
	std::cout << "ClapTrap " << Name << " take " << amount << " points of damage!" << std::endl;
	HitPoints -= amount;
	if (HitPoints <= 0)
		std::cout << "ClapTrap " << Name << " is " << RED << "DEAD" << RESET << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (HitPoints <= 0)
	{
		std::cout << "ClapTrap " << Name << " is " << RED << "DEAD" << RESET << std::endl;
		return;
	}
	if (EnergyPoints <= 0)
	{
		std::cout << "ClapTrap " << Name << " has no energy left" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << Name << " is repaired by " << amount << " points!" << std::endl;
	HitPoints += amount;
	EnergyPoints--;
}
