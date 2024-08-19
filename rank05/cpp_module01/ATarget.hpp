/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 17:47:26 by seblin            #+#    #+#             */
/*   Updated: 2024/08/19 17:55:53 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class ATarget
{
	public:

		ATarget( void );
		ATarget( const ATarget & );
		ATarget & operator=( const ATarget & );
		virtual ~ATarget( void );
};