/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <aalleon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 15:24:36 by antoine           #+#    #+#             */
/*   Updated: 2022/10/03 15:51:49 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
private:

protected:
	// attributes
	std::string	_name;

public:
	// Constructors
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap& other);

	// Destructors
	virtual ~DiamondTrap();

	// Operator overload
	DiamondTrap&	operator=(const DiamondTrap& other);

	// Accessors (getters should return by value or const-reference)
	void	setName(const std::string &name);
	const std::string&	getName(void) const;

	// Member functions
	void	attack(const std::string& target);
	void	whoAmI(void);
};

std::ostream&	operator<<(std::ostream& os, const DiamondTrap& obj);

#endif
