/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <aalleon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 17:41:50 by aalleon           #+#    #+#             */
/*   Updated: 2022/08/25 18:40:49 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	{
		ClapTrap	a;
		ClapTrap	b(std::string("robert"));
		ClapTrap	c = b;

		a = b;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << c << std::endl;
	}
	{
		ClapTrap	a(std::string("Norbert"));

		a.attack("Henry");
		std::cout << a << std::endl;
		a.takeDamage(3);
		std::cout << a << std::endl;
		a.takeDamage(4);
		std::cout << a << std::endl;
		a.attack("Henry");
		a.attack("Matteo");
		a.attack("Luke");
		a.attack("Giovanni");
		a.attack("Thierry");
		a.attack("Samantha");
		a.attack("Denis");
		a.attack("Theodore");
		std::cout << a << std::endl;
		a.beRepaired(4);
		std::cout << a << std::endl;
		a.attack("Vincent");
		a.takeDamage(8);
		std::cout << a << std::endl;
		a.attack("Dominic");
		a.beRepaired(7);
	}
	return (0);
}
