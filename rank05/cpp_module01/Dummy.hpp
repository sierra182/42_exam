/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 17:47:26 by seblin            #+#    #+#             */
/*   Updated: 2024/08/19 17:57:00 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Dummy
{
	public:

		Dummy( void );
		Dummy( const Dummy & );
		Dummy & operator=( const Dummy & );
		virtual ~Dummy( void );
};