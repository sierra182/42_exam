/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 09:57:06 by seblin            #+#    #+#             */
/*   Updated: 2024/08/21 14:54:48 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Warlock
{	
	std::string name;
	std::string title;
	
	Warlock();
	Warlock(const Warlock &);
	Warlock & operator=(const Warlock &);
	
	public:

	Warlock(const std::string & _name, const std::string & _title);	
		
	virtual ~Warlock();	
	
	const std::string & getName() const;
	const std::string & getTitle() const;
	void setTitle(const std::string & _title);
	
	void introduce() const;
};