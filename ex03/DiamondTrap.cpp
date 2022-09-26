/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <aalleon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 15:24:31 by antoine           #+#    #+#             */
/*   Updated: 2022/09/26 10:43:46 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/*==============================================================================
	Constructors.
==============================================================================*/

DiamondTrap::DiamondTrap(std::string name)
	: ClapTrap(name + "_clap_name")
	, ScavTrap()
	, FragTrap()
	, _name(name)
{
	std::cout << "DiamondTrap Default Constructor called." << std::endl;
	this->_life = FragTrap::_life;
	this->_energy = ScavTrap::_energy;
	this->_attack = FragTrap::_attack;
	return ;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
{
	std::cout << "DiamondTrap Copy Constructor called." << std::endl;
	*this = other;
	return ;
}

/*==============================================================================
	Destructor.
==============================================================================*/

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap Destructor called." << std::endl;
	return ;
}

/*==============================================================================
	Operator overloads.
==============================================================================*/

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& other)
{
	std::cout << "DiamondTrap assignment operator called." << std::endl;
	if (this != &other)
	{
		this->setName(other.getName());
		this->setLife(other.getLife());
		this->setEnergy(other.getEnergy());
		this->setAttack(other.getAttack());
	}
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const DiamondTrap& obj)
{
	os << "[" << obj.getName() << "]";
	os << static_cast<const ClapTrap&>(obj);
	return (os);
}

/*==============================================================================
	Getters.
==============================================================================*/

const std::string&	DiamondTrap::getName(void) const
{
	return (this->_name);
}

/*==============================================================================
	Setters.
==============================================================================*/

void	DiamondTrap::setName(const std::string &name)
{
	this->_name = name;
	this->ClapTrap::_name = name + "_clap_trap";
	return ;
}

/*==============================================================================
	Member functions.
==============================================================================*/

void	DiamondTrap::whoAmI(void)
{
	std::cout << "I am " << this->_name << "." << std::endl;
	std::cout << "But I also am " << this->ClapTrap::_name << "." << std::endl;
}

void	DiamondTrap::attack(const std::string& target)
{
	this->ScavTrap::attack(target);
	return ;
}