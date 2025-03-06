/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bouh <mel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 03:53:54 by mel-bouh          #+#    #+#             */
/*   Updated: 2025/03/06 15:48:19 by mel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public virtual ClapTrap
{
	protected:
		bool	_guardGate;
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap& a);
		~ScavTrap();
		ScavTrap& operator=(ScavTrap& a);
		void	attack(std::string const & target);
		void	guardGate();
};

#endif
