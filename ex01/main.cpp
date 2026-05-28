/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorimek <yorimek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 16:15:58 by yorimek           #+#    #+#             */
/*   Updated: 2026/05/28 12:39:50 by yorimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main()
{
	Contact	contact;
	PhoneBook PhoneBk;
	std::string	com;

	while (1)
	{
		if (std::cin.eof())
		{
			std::cout << std::endl;
			return (0);
		}
		std::cout << "Enter your command > ";
		std::getline(std::cin, com); 
		if (com == "ADD")
			PhoneBk.add();
		else if (com == "SEARCH")
			PhoneBk.search();
		else if (com == "EXIT")
			break;
		else if (com != "EXIT" && com != "SEARCH" && com != "ADD" && (!std::cin.eof()))
			std::cout << "Wrong command. Try something else." << std::endl;
	}
	return (0);
}