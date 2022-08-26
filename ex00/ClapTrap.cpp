/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <aalleon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 14:35:17 by aalleon           #+#    #+#             */
/*   Updated: 2022/08/26 10:10:39 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*==============================================================================
	Constructors.
==============================================================================*/

ClapTrap::ClapTrap(void):
_life(10),
_energy(10),
_attack(0)
{
	std::cout << "Default Constructor called." << std::endl;
	return ;
}

ClapTrap::ClapTrap(const std::string& name):
_name(name),
_life(10),
_energy(10),
_attack(0)
{
	std::cout << "Constructor called." << std::endl;
	return ;
}

ClapTrap::ClapTrap(const ClapTrap& other):
_name(other.getName()),
_life(other.getLife()),
_energy(other.getEnergy()),
_attack(other.getAttack())
{
	std::cout << "Copy Constructor called." << std::endl;
	return ;
}

/*==============================================================================
	Destructor.
==============================================================================*/

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called." << std::endl;
	return ;
}

/*==============================================================================
	Operators.
==============================================================================*/

ClapTrap&	ClapTrap::operator=(const ClapTrap& other)
{
	this->setName(other.getName());
	this->setLife(other.getLife());
	this->setEnergy(other.getEnergy());
	this->setAttack(other.getAttack());
	return (*this);
}

/*==============================================================================
	Getters.
==============================================================================*/

const std::string&	ClapTrap::getName(void) const
{
	return (this->_name);
}

unsigned int	ClapTrap::getLife(void) const
{
	return (this->_life);
}

unsigned int	ClapTrap::getEnergy(void) const
{
	return (this->_energy);
}

unsigned int	ClapTrap::getAttack(void) const
{
	return (this->_attack);
}

/*==============================================================================
	Setters.
==============================================================================*/

void	ClapTrap::setName(const std::string &name)
{
	this->_name = name;
	return ;
}

void	ClapTrap::setLife(const unsigned int life)
{
	this->_life = life;
	return ;
}

void	ClapTrap::setEnergy(const unsigned int energy)
{
	this->_energy = energy;
	return ;
}

void	ClapTrap::setAttack(const unsigned int attack)
{
	this->_attack = attack;
	return ;
}

/*==============================================================================
	Actions.
==============================================================================*/

void	ClapTrap::attack(const std::string& target)
{
	if (this->_energy == 0 || this->_life == 0)
	{
		std::cout << this->_name << " cannot attack." << std::endl;
		return ;
	}
	std::cout << this->_name << " attacked " << target << " and dealt ";
	std::cout << this->_attack << " damage." << std::endl;
	this->_energy--;
	std::cout << this->_name << " now has " << this->_energy << " energy.";
	std::cout << std::endl;
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	unsigned int	damage;

	if (this->_life >= amount)
		damage = amount;
	else
		damage = this->_life;
	std::cout << this->_name << " has been hit for " << damage << " hitpoints";
	this->_life -= damage;
	std::cout << " and now has " << this->_life << " hp." << std::endl;
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy == 0)
	{
		std::cout << this->_name << " cannot heal." << std::endl;
		return ;
	}
	std::cout << this->_name << " is healing " << amount << " hp and now has ";
	this->_life += amount;
	std::cout << this->_life << " hp." << std::endl;
	this->_energy--;
	std::cout << this->_name << " now has " << this->_energy << " energy.";
	std::cout << std::endl;
	return ;
}

/*==============================================================================
	Ostream <<.
==============================================================================*/

std::ostream	&operator<<(std::ostream &os, const ClapTrap &claptrap)
{
	os << "[" << claptrap.getName() << "] ";
	os << "life: " << claptrap.getLife() << "; ";
	os << "energy: " << claptrap.getEnergy() << "; ";
	os << "attack: " << claptrap.getAttack() << ";";
	return (os);
}
