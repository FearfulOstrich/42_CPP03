/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <aalleon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 17:41:50 by aalleon           #+#    #+#             */
/*   Updated: 2022/09/26 10:32:21 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main()
{
	{
		DiamondTrap	tom("Thomas");

		std::cout << tom << std::endl;
	}
	std::cout << std::endl << std::endl;
	{
		DiamondTrap	norb("Norbert");

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
		norb.whoAmI();
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
