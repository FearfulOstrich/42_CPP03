/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <aalleon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 15:51:54 by aalleon           #+#    #+#             */
/*   Updated: 2022/10/03 15:51:55 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/*==============================================================================
	Constructors.
==============================================================================*/

FragTrap::FragTrap(void)
	: ClapTrap("", 100, 100, 30)
{
	std::cout << "FragTrap Default Constructor called." << std::endl;
	return ;
}

FragTrap::FragTrap(const FragTrap& other)
{
	std::cout << "FragTrap Copy Constructor called." << std::endl;
	*this = other;
	return ;
}

FragTrap::FragTrap(const std::string& name)
	: ClapTrap(name, 100, 100, 30)
{
	std::cout << "FragTrap Constructor called." << std::endl;
}

/*==============================================================================
	Destructor.
==============================================================================*/

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap Destructor called." << std::endl;
	return ;
}

/*==============================================================================
	Operator overloads.
==============================================================================*/

FragTrap&	FragTrap::operator=(const FragTrap& other)
{
	std::cout << "FragTrap assignment operator called." << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		this->_life = other._life;
		this->_energy = other._energy;
		this->_attack = other._attack;
	}
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const FragTrap& obj)
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

void	FragTrap::highFiveGuys(void)
{
	std::cout << "Hey! Shall we high five ? =)" << std::endl;
	return ;
}
