/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 15:24:36 by antoine           #+#    #+#             */
/*   Updated: 2022/09/02 15:25:09 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _DIAMONDTRAP_HPP_
# define _DIAMONDTRAP_HPP_

# include <iostream>

class DiamondTrap: public ScavTrap, public FlagTrap
{
private:

protected:

public:
	// Constructors
	DiamondTrap();
	DiamondTrap(const DiamondTrap& other);

	// Destructors
	virtual ~DiamondTrap();

	// Operator overload
	DiamondTrap&	operator=(const DiamondTrap& other);

	// Accessors (getters should return by value or const-reference)
	// Member functions
};

std::ostream&	operator<<(std::ostream& os, const DiamondTrap& obj);

#endif
