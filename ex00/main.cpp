/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bouh <mel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 05:13:24 by mel-bouh          #+#    #+#             */
/*   Updated: 2024/12/16 05:17:02 by mel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap a("ClapTrap1");
	ClapTrap b("ClapTrap2");

	a.attack("ClapTrap2");
	b.takeDamage(5);
	b.beRepaired(5);
	b.attack("ClapTrap1");
	a.takeDamage(10);
	a.attack("ClapTrap2");
	return 0;
}
