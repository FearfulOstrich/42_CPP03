/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <aalleon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 17:41:50 by aalleon           #+#    #+#             */
/*   Updated: 2022/08/26 14:47:39 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ClavTrap.hpp"

int	main()
{
	{
		ClapTrap	rob("Robert");
		ClavTrap	tim("Timothy");

		std::cout << rob << std::endl;
		std::cout << tim << std::endl;
	}
	std::cout << std::endl << std::endl;
	{
		ClavTrap	norb("Norbert");

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
		norb.guardGate();
		norb.takeDamage(8);
		std::cout << norb << std::endl;
		norb.attack("Dominic");
		norb.guardGate();
	}
	return (0);
}
