/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bouh <mel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 05:49:08 by mel-bouh          #+#    #+#             */
/*   Updated: 2024/12/20 06:38:33 by mel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	ClapTrap a("ClapTrap1");
	FragTrap b("FragTrap1");
	FragTrap c("FragTrap1");

	a.attack("ClapTrap2");
	b.takeDamage(5);
	b.beRepaired(5);
	b.attack("ClapTrap1");
	a.takeDamage(10);
	a.attack("ClapTrap2");
	c.attack("ClapTrap1");
	c.highFivesGuys();
	b.takeDamage(50);
	c.attack("ClapTrap1");
}
