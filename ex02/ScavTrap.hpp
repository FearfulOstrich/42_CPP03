/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <aalleon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 15:22:27 by antoine           #+#    #+#             */
/*   Updated: 2022/10/03 15:51:08 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
private:
	bool	_is_keeping;
protected:

public:
	// Constructors
	ScavTrap();
	ScavTrap(const ScavTrap& src);
	ScavTrap(const std::string& name);

	// Destructors
	virtual ~ScavTrap();

	// Operator overload
	ScavTrap&	operator=(const ScavTrap& other);

	// Getters
	bool	getIsKeeping(void) const;

	// Member functions
	void	guardGate(void);
};

std::ostream&	operator<<(std::ostream& os, ScavTrap const &obj);

#endif
