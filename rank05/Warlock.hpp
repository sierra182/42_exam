/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 09:57:06 by seblin            #+#    #+#             */
/*   Updated: 2024/08/21 10:25:58 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Warlock
{
	std::string name;
	std::string title;
	
	Warlock::Warlock();
	Warlock::Warlock(const Warlock &);
	Warlock & operator=(const Warlock &);
	
	public:

	Warlock::Warlock(const std::string & _name, const std::string & _title)
	: name(_name), title(_title){}
		
	virtual Warlock::~Warlock()
	{ std::cout << name << ": My job here is done!" <<std::endl; }
	
	const std::string & Warlock::getName() const {return this->name;}
	const std::string & Warlock::getTitle() const {return this->title;}
	void setTitle(const std::string & _title) {this->title = _title;}
	
	void Warlock::introduce() const
	{ std::cout << name << ": I am " << name << ", " << title << "!" <<std::endl; }
};