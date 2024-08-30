/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 09:46:54 by seblin            #+#    #+#             */
/*   Updated: 2024/08/22 10:03:43 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Warlock
{
	std::string name;
	std::string title;

	Warlock();
	Warlock( const Warlock & src );
	Warlock & operator=( const Warlock & rhs );
	
	public:
	
	Warlock( const std::string & name, const std::string & title );
	~Warlock();

	const std::string & getName() const; 
	const std::string & getTitle() const; 

	void setTitle( const std::string & title );
	void introduce() const;
};