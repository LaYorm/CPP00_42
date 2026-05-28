/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorimek <yorimek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 11:08:00 by yorimek           #+#    #+#             */
/*   Updated: 2026/05/28 16:33:56 by yorimek          ###   ########.fr       */
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
		bool	str_is_num(std::string str);
		bool	str_is_space(std::string str);
		std::string	format_str(std::string);
		void	print_phonebook(void);	
	public:
		PhoneBook();
		~PhoneBook();
		void		add(void);
		void		search(void);
};

#endif