/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 13:25:57 by antoine           #+#    #+#             */
/*   Updated: 2022/09/02 13:26:06 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/*==============================================================================
	Constructors.
==============================================================================*/

ScavTrap::ScavTrap(void)
	: ClapTrap("", 100, 50, 20)
	, _is_keeping(0)
{
	std::cout << "ScavTrap Default Constructor called." << std::endl;
	return ;
}

ScavTrap::ScavTrap(const ScavTrap& other)
{
	std::cout << "ScavTrap Copy Constructor called." << std::endl;
	*this = other;
	return ;
}

ScavTrap::ScavTrap(const std::string& name)
	: ClapTrap(name, 100, 50, 20)
	, _is_keeping(0)
{
	std::cout << "ScavTrap Constructor called." << std::endl;
}

/*==============================================================================
	Destructor.
==============================================================================*/

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap Destructor called." << std::endl;
	return ;
}

/*==============================================================================
	Operator overloads.
==============================================================================*/

ScavTrap&	ScavTrap::operator=(const ScavTrap& other)
{
	std::cout << "ScavTrap assignment operator called." << std::endl;
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

std::ostream&	operator<<(std::ostream& os, const ScavTrap& obj)
{
	os << static_cast<const ClapTrap&>(obj);
	os << " keeping gate: " << obj.getIsKeeping() << ";";
	return (os);
}

/*==============================================================================
	Getters.
==============================================================================*/

bool	ScavTrap::getIsKeeping(void) const
{
	return (this->_is_keeping);
}

/*==============================================================================
	Setters.
==============================================================================*/

/*==============================================================================
	Member functions.
==============================================================================*/

void	ScavTrap::guardGate(void)
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