/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 15:24:31 by antoine           #+#    #+#             */
/*   Updated: 2022/09/02 15:24:45 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/*==============================================================================
	Constructors.
==============================================================================*/

DiamondTrap::DiamondTrap(void)
{
	std::cout << "DiamondTrap Default Constructor called." << std::endl;
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
		// Copy all attributes
	}
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const DiamondTrap& obj)
{
	os << "something";
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
