/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 14:09:57 by seblin            #+#    #+#             */
/*   Updated: 2024/08/21 17:10:04 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ATarget.hpp"

class BrickWall : public ATarget
{
	public:
	
	BrickWall();
	virtual ~BrickWall();
	virtual ATarget * clone() const;
};