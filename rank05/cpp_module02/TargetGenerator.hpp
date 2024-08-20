/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 14:57:29 by seblin            #+#    #+#             */
/*   Updated: 2024/08/20 15:20:25 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ATarget.hpp"
#define TG 100

class TargetGenerator
{
	ATarget * targets[TG];
	TargetGenerator( const TargetGenerator & );
	TargetGenerator & operator=( const TargetGenerator & );
	
	public:

		TargetGenerator( void );
		virtual ~TargetGenerator( void );
		
	void learnTargetType(ATarget*);
	void forgetTargetType(std::string const &);
	ATarget* createTarget(std::string const &);
};
