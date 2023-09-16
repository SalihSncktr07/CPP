/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spirnaz <spirnaz@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:25:06 by spirnaz           #+#    #+#             */
/*   Updated: 2023/09/16 14:36:38 by spirnaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"
# include <iostream>
# include <iomanip>
# include <string>
# include <iomanip>



class phone
    {
    private:
        contact _contacts[8];
        static int c_count;
        static int total_count;
    public:
        void searchcommand(void);
        void addcommand(void);
    };

#endif
