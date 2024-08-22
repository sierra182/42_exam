/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 14:05:13 by seblin            #+#    #+#             */
/*   Updated: 2024/08/21 17:05:54 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ASpell.hpp"

class Polymorph : public ASpell
{
	public:
	
	Polymorph();
	virtual ~Polymorph();
	virtual ASpell * clone() const;
};