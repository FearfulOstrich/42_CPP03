#include "ClavTrap.hpp"

/*==============================================================================
	Constructors.
==============================================================================*/

ClavTrap::ClavTrap(void)
	: ClapTrap("", 100, 50, 20)
	, _is_keeping(0)
{
	std::cout << "ClavTrap Default Constructor called." << std::endl;
	return ;
}

ClavTrap::ClavTrap(const ClavTrap& other)
{
	std::cout << "ClavTrap Copy Constructor called." << std::endl;
	*this = other;
	return ;
}

ClavTrap::ClavTrap(const std::string& name)
	: ClapTrap(name, 100, 50, 20)
	, _is_keeping(0)
{
	std::cout << "ClavTrap Constructor called." << std::endl;
}

/*==============================================================================
	Destructor.
==============================================================================*/

ClavTrap::~ClavTrap(void)
{
	std::cout << "ClavTrap Destructor called." << std::endl;
	return ;
}

/*==============================================================================
	Operator overloads.
==============================================================================*/

ClavTrap&	ClavTrap::operator=(const ClavTrap& other)
{
	std::cout << "ClavTrap assignment operator called." << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		this->_life = other._life;
		this->_energy = other._energy;
		this->_attack = other._attack;
		this->_is_keeping = other._is_keeping;
	}
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const ClavTrap& obj)
{
	os << static_cast<const ClapTrap&>(obj);
	os << " keeping gate: " << obj.getIsKeeping() << ";";
	return (os);
}

/*==============================================================================
	Getters.
==============================================================================*/

bool	ClavTrap::getIsKeeping(void) const
{
	return (this->_is_keeping);
}

/*==============================================================================
	Setters.
==============================================================================*/

/*==============================================================================
	Member functions.
==============================================================================*/

void	ClavTrap::guardGate(void)
{
	if (this->_is_keeping)
	{
		std::cout << this->_name << " is already at the gate." << std::endl;
		return ;
	}
	this->_is_keeping = 1;
	std::cout << this->_name << " is now at the gate." << std::endl;
	return ;
}
