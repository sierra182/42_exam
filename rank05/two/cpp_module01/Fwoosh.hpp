/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 14:05:13 by seblin            #+#    #+#             */
/*   Updated: 2024/08/21 16:54:33 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ASpell.hpp"

class Fwoosh : public ASpell
{
	public:
	
	Fwoosh();
	virtual ~Fwoosh();
	virtual ASpell * clone() const;
};