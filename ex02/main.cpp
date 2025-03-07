/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bouh <mel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 05:49:08 by mel-bouh          #+#    #+#             */
/*   Updated: 2025/03/06 15:51:49 by mel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap a("ClapTrap1");
	FragTrap b("FragTrap1");
	FragTrap c("FragTrap2");

	a.attack("FragTrap2");
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
}
