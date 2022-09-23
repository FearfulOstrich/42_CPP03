/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <aalleon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 17:41:50 by aalleon           #+#    #+#             */
/*   Updated: 2022/09/02 15:23:01 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FlagTrap.hpp"

int	main()
{
	{
		ClapTrap	rob("Robert");
		FlagTrap	tim("Timothy");

		std::cout << rob << std::endl;
		std::cout << tim << std::endl;
	}
	std::cout << std::endl << std::endl;
	{
		FlagTrap	norb("Norbert");

		norb.attack("Jeremy");
		std::cout << norb << std::endl;
		norb.takeDamage(25);
		std::cout << norb << std::endl;
		norb.takeDamage(18);
		std::cout << norb << std::endl;
		norb.attack("Valerie");
		norb.attack("Cassie");
		norb.attack("Victor");
		norb.attack("Tristan");
		std::cout << norb << std::endl;
		norb.beRepaired(40);
		std::cout << norb << std::endl;
		norb.attack("Killian");
		norb.highFiveGuys();
		norb.takeDamage(8);
		std::cout << norb << std::endl;
		norb.attack("Dominic");
		norb.highFiveGuys();
	}
	return (0);
}