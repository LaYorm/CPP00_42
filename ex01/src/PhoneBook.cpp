/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorimek <yorimek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 11:07:58 by yorimek           #+#    #+#             */
/*   Updated: 2026/06/03 15:32:25 by yorimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	std::cout << "Welcome in Phonebook ! Created a empty directory for up to 8 contacts"
		<< std::endl;
	this->index = 0;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "You're now exiting the PhoneBook. See you soon !" << std::endl;
}

void	PhoneBook::add(void)
{
	std::string	str;

	str = "";
	while (str == "" && (!std::cin.eof()))
	{
		std::cout << "Enter the first name: ";
		std::getline(std::cin, str);
		if (str != "" && str_is_space(str))
			this->_contacts[this->index % 8].set_fname(str);
		else
			str = "";
	}
	str = "";
	while (str == "" && (!std::cin.eof()))
	{
		std::cout << "Enter the last name: ";
		std::getline(std::cin, str);
		if (str != "" && str_is_space(str))
			this->_contacts[this->index % 8].set_lname(str);
		else	str = "";
	}
	str = "";
	while (str == "" && (!std::cin.eof()))
	{
		std::cout << "Enter the nick name: ";
		std::getline(std::cin, str);
		if (str != "" && str_is_space(str))
			this->_contacts[this->index % 8].set_nickname(str);
		else
			str = "";
	}
	str = "";
	while (str == "" && (!std::cin.eof()))
	{
		std::cout << "Enter the phone number: ";
		std::getline(std::cin, str);
		if (str != "" && str_is_num(str))
			this->_contacts[this->index % 8].set_phone(str);
		else
			str = "";
	}
	str = "";
	while (str == "" && (!std::cin.eof()))
	{
		std::cout << "Enter the secret: ";
		std::getline(std::cin, str);
		if (str != "" && str_is_space(str))
			this->_contacts[this->index % 8].set_secret(str);
		else	str = "";
	}
		this->index++;
}

void	PhoneBook::search(void) const
{
	std::string	com;

	if (this->index == 0)
	{
		std::cout << "The PhoneBook is empty. Please enter at least one contact." << std::endl;
		return ;
	}
	print_phonebook();
	while (1)
	{
		std::cout << "Choose a contact's index > ";
		std::getline(std::cin, com);
		if (std::cin.eof())
			return ;
		if (com.size() != 1 || com[0] < '0' || com[0] > '7' || !this->_contacts[com[0] - '0'].get_fname().size())
			std::cout << "Invalid index. Try again." << std::endl;
		else
		{
			std::cout << std::endl << "First name: " << this->_contacts[com[0] - '0'].get_fname() << std::endl;
			std::cout << "Last name: " << this->_contacts[com[0] - '0'].get_lname() << std::endl;
			std::cout << "Nick name: " << this->_contacts[com[0] - '0'].get_nickname() << std::endl;
			std::cout << "Phone number: " << this->_contacts[com[0] - '0'].get_phone() << std::endl;
			std::cout << "Secret: " << this->_contacts[com[0] - '0'].get_secret() << std::endl << std::endl;
			return ;
		}
	}
	return ;
}

bool	PhoneBook::str_is_num(std::string str) const
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!std::isdigit(str[i]))
		{
			std::cout << "You need to enter only number. Try again" << std::endl;
			str = "";	
			return (false);
		}
		i++;
	}
	return (true);
}

bool	PhoneBook::str_is_space(std::string str) const
{
	int	i;
	int	has_non_space;

	i = 0;
	has_non_space = 0;
	while (str[i])
	{
		if (!std::isspace(str[i]))
			has_non_space++;
		i++;
	}
	if (!has_non_space)
	{
		std::cout << "You can't enter only space(s). Please try again." << std::endl;
		str = "";
		return (false);
	}
	return (true);
}

void	PhoneBook::print_phonebook() const
{
	int	i;

	std::cout << std::endl << "                 ___________                 " << std::endl;
	std::cout << "                | PhoneBook |                " << std::endl;
	std::cout << "                _____________                " << std::endl;
	std::cout << "_____________________________________________" << std::endl;
	std::cout << "|     Index|First name| Last name| Nick name|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	i = 0;
	while (i < 8 && this->_contacts[i].get_fname().size())
	{
		std::cout << "|" << "         " << i;
		std::cout << "|" << format_str(this->_contacts[i].get_fname());
		std::cout << "|" << format_str(this->_contacts[i].get_lname());
		std::cout << "|" << format_str(this->_contacts[i].get_nickname()) << "|" << std::endl;
		i++;
	}
	std::cout << "_____________________________________________" << std::endl;
}

std::string	PhoneBook::format_str(std::string str) const
{
	std::string	new_str;
	std::string	space;

	if (str.size() < 10)
	{
		space = std::string((10 - str.size()), ' ');
		new_str = space + str;
	}
	else
	{
		new_str = str;
		new_str[9] = '.';
		new_str.resize(10);
	}
	return (new_str);
}