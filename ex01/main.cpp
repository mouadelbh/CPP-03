#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap a("ClapTrap1");
	ClapTrap b("ClapTrap2");
	ScavTrap c("ScavTrap1");

	a.attack("ClapTrap2");
	b.takeDamage(5);
	b.beRepaired(5);
	b.attack("ClapTrap1");
	a.takeDamage(10);
	a.attack("ClapTrap2");
	c.attack("ClapTrap1");
	c.guardGate();
	b.takeDamage(50);
	c.attack("ClapTrap1");
	return 0;
}
