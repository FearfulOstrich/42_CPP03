/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <aalleon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 11:45:57 by aalleon           #+#    #+#             */
/*   Updated: 2022/08/26 14:26:10 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CLAPTRAP_HPP_
# define _CLAPTRAP_HPP_

# include <iostream>
# include <string>

class ClapTrap
{
public:
	//Constructors
	ClapTrap(void);
	ClapTrap(const std::string& name);
	ClapTrap(const ClapTrap& other);

	//Destructor
	~ClapTrap(void);

	//Operators
	ClapTrap& operator=(const ClapTrap& other);

	//Getters
	const std::string&	getName(void) const;
	unsigned int		getLife(void) const;
	unsigned int		getEnergy(void) const;
	unsigned int		getAttack(void) const;

	//Setters
	void	setName(const std::string &name);
	void	setLife(const unsigned int life);
	void	setEnergy(const unsigned int energy);
	void	setAttack(const unsigned int attack);

	//member functions
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

protected:
	//Constructor for derived
	ClapTrap(const std::string& name, int life, int energy, int attack);
	
	//attributes
	std::string		_name;
	unsigned int	_life;
	unsigned int	_energy;
	unsigned int	_attack;
};

//Ostream <<
std::ostream	&operator<<(std::ostream &os, const ClapTrap &claptrap);

#endif
