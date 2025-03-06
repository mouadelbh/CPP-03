/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bouh <mel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 05:49:08 by mel-bouh          #+#    #+#             */
/*   Updated: 2025/03/06 16:23:48 by mel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	ClapTrap a("ClapTrap1");
	FragTrap b("FragTrap1");
	FragTrap c("FragTrap2");
	ScavTrap e("ScavTrap1");
	DiamondTrap d1("Diamond1");
	DiamondTrap	d2("Diamond2");

	d2.whoamI();
	d2 = d1;
	a.attack("FragTrap2");
	e.attack("FragTrap1");
	d1.attack("ScavTrap1");
	d1.whoamI();
	d2.whoamI();
	c.takeDamage(20);
	b.takeDamage(5);
	b.beRepaired(5);
	b.attack("ClapTrap1");
	a.takeDamage(10);
	a.attack("FragTrap1");
	c.attack("ClapTrap1");
	a.takeDamage(30);
	c.highFivesGuys();
	b.takeDamage(50);
	c.attack("ScavTrap1");
	e.takeDamage(30);
}
