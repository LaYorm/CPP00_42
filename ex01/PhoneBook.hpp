/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorimek <yorimek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 11:08:00 by yorimek           #+#    #+#             */
/*   Updated: 2026/06/03 15:32:22 by yorimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"
#include <stdlib.h>

class PhoneBook
{
	private:
		Contact _contacts[8];
		int		index;
		bool	str_is_num(std::string str) const;
		bool	str_is_space(std::string str) const;
		std::string	format_str(std::string) const;
		void	print_phonebook(void) const;	
	public:
		PhoneBook();
		~PhoneBook();
		void		add(void);
		void		search(void) const;
};

#endif