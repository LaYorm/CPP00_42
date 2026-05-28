/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorimek <yorimek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 11:07:55 by yorimek           #+#    #+#             */
/*   Updated: 2026/05/27 16:36:43 by yorimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
	private:
		std::string _fname;
		std::string _lname;
		std::string _nickname;
		std::string _phone;
		std::string _secret;
	
	public:
		Contact(void);
		~Contact(void);
		std::string get_fname(void) const;
		std::string get_lname(void) const;
		std::string get_nickname(void) const;
		std::string get_phone(void) const;
		std::string get_secret(void) const;
		void set_fname(std::string);
		void set_lname(std::string);
		void set_nickname(std::string);
		void set_phone(std::string);
		void set_secret(std::string);
};

#endif