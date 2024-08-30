/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 09:46:54 by seblin            #+#    #+#             */
/*   Updated: 2024/08/22 11:16:38 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <map>
#include "ATarget.hpp"

class TargetGenerator
{
	std::map<std::string, ATarget *> spl;

	TargetGenerator( const TargetGenerator & src );
	TargetGenerator & operator=( const TargetGenerator & rhs );
	
	public:
	
	TargetGenerator();
	~TargetGenerator();

	void learnTargetType( ATarget * spell );
	void forgetTargetType( const std::string & spell );
	ATarget * createTarget( const std::string & spell );
};