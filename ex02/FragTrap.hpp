/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <aalleon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 15:50:58 by aalleon           #+#    #+#             */
/*   Updated: 2022/10/03 15:51:03 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
private:

protected:

public:
	// Constructors
	FragTrap();
	FragTrap(const FragTrap& other);
	FragTrap(const std::string& name);

	// Destructors
	virtual ~FragTrap();

	// Operator overload
	FragTrap&	operator=(const FragTrap& other);

	// Accessors (getters should return by value or const-reference)
	// Member functions
	void	highFiveGuys(void);
};

std::ostream&	operator<<(std::ostream& os, const FragTrap& obj);

#endif
