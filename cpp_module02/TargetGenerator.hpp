/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 09:57:06 by seblin            #+#    #+#             */
/*   Updated: 2024/08/21 18:25:34 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ATarget.hpp"
#include <map>
#include "ASpell.hpp"

class TargetGenerator
{
	std::map<const std::string, ATarget *> trg;
		
	TargetGenerator(const TargetGenerator &);
	TargetGenerator & operator=(const TargetGenerator &);
	
	public:

	TargetGenerator();		
	virtual ~TargetGenerator();	
		
	void learnTargetType( ATarget * target );
	void forgetTargetType( const std::string & target );
	ATarget * createTarget( const std::string & target );
};