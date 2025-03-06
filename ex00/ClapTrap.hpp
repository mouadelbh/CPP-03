/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bouh <mel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 04:27:52 by mel-bouh          #+#    #+#             */
/*   Updated: 2025/03/06 16:04:08 by mel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# define RED "\033[31m"
# define RESET "\033[0m"

# include <iostream>

class ClapTrap
{
	private:
		int			HitPoints;
		int			EnergyPoints;
		int			AttackDamage;
		std::string	Name;
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap& a);
		ClapTrap&	operator=(ClapTrap& a);
		~ClapTrap();
		void	attack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif
