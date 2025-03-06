/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bouh <mel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 15:35:47 by mel-bouh          #+#    #+#             */
/*   Updated: 2025/03/06 16:22:05 by mel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
	std::cout << "DiamondTrap default constructor called" << std::endl;
	origin_name = "";
	HitPoints = FragTrap::HitPoints;
	EnergyPoints = ScavTrap::HitPoints;
	AttackDamage = FragTrap::AttackDamage;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"){
	std::cout << "DiamondTrap " << Name << " is created" << std::endl;
	origin_name = name;
	HitPoints = FragTrap::HitPoints;
	EnergyPoints = ScavTrap::HitPoints;
	AttackDamage = FragTrap::AttackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) {
	std::cout << "DiamondTrap copy constructor is called" << std::endl;
	*this = other;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other) {
	if (this != &other) {
		std::cout << "DiamondTrap copy constructor is called" << std::endl;
		Name = other.Name;
		origin_name = other.origin_name;
		HitPoints = other.HitPoints;
		EnergyPoints = other.HitPoints;
		AttackDamage = other.AttackDamage;
		_guardGate = other._guardGate;
	}
	return *this;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap " << Name << " is Destroyed" << std::endl;
}

void	DiamondTrap::attack(const std::string& target) {
	ScavTrap::attack(target);
}

void	DiamondTrap::whoamI() {
	std::cout << "DiamondTrap : " << origin_name << " ClapTrap : " << ClapTrap::Name << std::endl;
}
