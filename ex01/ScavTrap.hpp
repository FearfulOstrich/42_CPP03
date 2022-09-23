/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 13:26:29 by antoine           #+#    #+#             */
/*   Updated: 2022/09/02 13:26:31 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SCAVTRAP_HPP_
# define _SCAVTRAP_HPP_

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
