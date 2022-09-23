#include "FlagTrap.hpp"

/*==============================================================================
	Constructors.
==============================================================================*/

FlagTrap::FlagTrap(void)
	: ClapTrap("", 100, 100, 30)
{
	std::cout << "FlagTrap Default Constructor called." << std::endl;
	return ;
}

FlagTrap::FlagTrap(const FlagTrap& other)
{
	std::cout << "FlagTrap Copy Constructor called." << std::endl;
	*this = other;
	return ;
}

FlagTrap::FlagTrap(const std::string& name)
	: ClapTrap(name, 100, 100, 30)
{
	std::cout << "FlagTrap Constructor called." << std::endl;
}

/*==============================================================================
	Destructor.
==============================================================================*/

FlagTrap::~FlagTrap(void)
{
	std::cout << "FlagTrap Destructor called." << std::endl;
	return ;
}

/*==============================================================================
	Operator overloads.
==============================================================================*/

FlagTrap&	FlagTrap::operator=(const FlagTrap& other)
{
	std::cout << "FlagTrap assignment operator called." << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		this->_life = other._life;
		this->_energy = other._energy;
		this->_attack = other._attack;
	}
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const FlagTrap& obj)
{
	os << static_cast<const ClapTrap&>(obj);
	return (os);
}

/*==============================================================================
	Getters.
==============================================================================*/

/*==============================================================================
	Setters.
==============================================================================*/

/*==============================================================================
	Member functions.
==============================================================================*/

void	FlagTrap::highFiveGuys(void)
{
	std::cout << "Hey! Shall we high five ? =)" << std::endl;
	return ;
}
