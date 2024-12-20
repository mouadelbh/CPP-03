/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bouh <mel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 04:27:52 by mel-bouh          #+#    #+#             */
/*   Updated: 2024/12/16 05:10:38 by mel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# define RED "\033[31m"
# define RESET "\033[0m"

# include <iostream>

class ClapTrap
{
	private:
		int			Health;
		int			Mana;
		int			AttackDamage;
		std::string	Name;
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap& a);
		~ClapTrap();
		ClapTrap& operator=(ClapTrap& a);
		void	attack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};
