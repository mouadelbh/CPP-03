/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bouh <mel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 05:49:26 by mel-bouh          #+#    #+#             */
/*   Updated: 2024/12/20 04:32:13 by mel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap Default constructor called" << std::endl;
	Health = 100;
	Mana = 50;
	AttackDamage = 20;
	_guardGate = false;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	std::cout << "ScavTrap " << name << " is created" << std::endl;
	Name = name;
	Health = 100;
	Mana = 50;
	AttackDamage = 20;
	_guardGate = false;
}

ScavTrap::ScavTrap(ScavTrap& a): ClapTrap(a)
{
	std::cout << "ScavTrap " << Name << " Copy constructor called" << std::endl;
	*this = a;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << Name << " is destroyed" << std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap& a)
{
	if (this == &a)
		return *this;
	std::cout << "ScavTrap " << Name << " Assignment constructor called" << std::endl;
	Name = a.Name;
	Health = a.Health;
	Mana = a.Mana;
	AttackDamage = a.AttackDamage;
	return *this;
}

void	ScavTrap::attack(const std::string& target)
{
	if (Health <= 0)
	{
		std::cout << "ScavTrap " << Name << " is " << RED << "DEAD" << RESET << std::endl;
		return;
	}
	if (_guardGate)
	{
		std::cout << "ScavTrap " << Name << " is in Gate keeper mode and can't attack" << std::endl;
		return;
	}
	if (Mana == 0)
	{
		std::cout << "ScavTrap " << Name << " is tired and needs to be repaired" << std::endl;
		return;
	}
	std::cout << "ScavTrap " << Name << " attack " << target << ", causing " << AttackDamage << " points of damage!" << std::endl;
	Mana -= 10;
}

void	ScavTrap::guardGate()
{
	if (Health == 0)
	{
		std::cout << "ScavTrap " << Name << " is " << RED << "DEAD" << RESET << std::endl;
		return;
	}
	if (_guardGate)
	{
		_guardGate = false;
		std::cout << "ScavTrap " << Name << " have exit from Gate keeper mode" << std::endl;
		return;
	}
	_guardGate = true;
	std::cout << "ScavTrap " << Name << " have enterred in Gate keeper mode" << std::endl;
}
