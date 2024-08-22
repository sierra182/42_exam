/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 14:05:13 by seblin            #+#    #+#             */
/*   Updated: 2024/08/21 17:08:19 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ASpell.hpp"

class Fireball : public ASpell
{
	public:
	
	Fireball();
	virtual ~Fireball();
	virtual ASpell * clone() const;
};