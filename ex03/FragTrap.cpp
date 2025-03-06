/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bouh <mel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 05:49:47 by mel-bouh          #+#    #+#             */
/*   Updated: 2025/03/06 15:25:25 by mel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap Default constructor called" << std::endl;
	HitPoints = 100;
	EnergyPoints = 100;
	AttackDamage = 30;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	std::cout << "FragTrap " << name << " is created" << std::endl;
	HitPoints = 100;
	EnergyPoints = 100;
	AttackDamage = 30;
}

FragTrap::FragTrap(FragTrap& a): ClapTrap(a)
{
	std::cout << "FragTrap " << Name << " Copy constructor called" << std::endl;
	*this = a;
}

FragTrap& FragTrap::operator=(FragTrap& a)
{
	if (this == &a)
		return *this;
	std::cout << "FragTrap " << Name << " Assignment constructor called" << std::endl;
	Name = a.Name;
	HitPoints = a.HitPoints;
	EnergyPoints = a.EnergyPoints;
	AttackDamage = a.AttackDamage;
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << Name << " is destroyed" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	if (HitPoints <= 0)
	{
		std::cout << "FragTrap " << Name << " is " << RED << "DEAD" << RESET << std::endl;
		return;
	}
	std::cout << "FragTrap " << Name << " says: High fives, guys! 🙌" << std::endl;
}
