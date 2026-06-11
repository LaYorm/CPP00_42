/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorimek <yorimek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 11:07:51 by yorimek           #+#    #+#             */
/*   Updated: 2026/05/27 16:43:56 by yorimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

std::string	Contact::get_fname(void) const
{
	return (_fname);
}

std::string Contact::get_lname(void) const
{
	return (_lname);
}

std::string Contact::get_nickname(void) const
{
	return (_nickname);
}

std::string Contact::get_phone(void) const
{
	return (_phone);
}

std::string Contact::get_secret(void) const
{
	return (_secret);
}

void	Contact::set_fname(std::string str)
{
	this->_fname = str;
}

void	Contact::set_lname(std::string str)
{
	this->_lname = str;
}

void	Contact::set_nickname(std::string str)
{
	this->_nickname = str;
}

void	Contact::set_phone(std::string str)
{
	this->_phone = str;
}

void	Contact::set_secret(std::string str)
{
	this->_secret = str;
}
