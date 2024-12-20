/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bouh <mel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 05:49:47 by mel-bouh          #+#    #+#             */
/*   Updated: 2024/12/20 06:37:40 by mel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap Default constructor called" << std::endl;
	Health = 100;
	Mana = 100;
	AttackDamage = 30;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	std::cout << "FragTrap " << name << " is created" << std::endl;
	Name = name;
	Health = 100;
	Mana = 100;
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
	Health = a.Health;
	Mana = a.Mana;
	AttackDamage = a.AttackDamage;
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << Name << " is destroyed" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	if (Health <= 0)
	{
		std::cout << "FragTrap " << Name << " is " << RED << "DEAD" << RESET << std::endl;
		return;
	}
	std::cout << "FragTrap " << Name << " says: High fives, guys! 🙌" << std::endl;
}
