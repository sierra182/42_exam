/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 17:47:26 by seblin            #+#    #+#             */
/*   Updated: 2024/08/19 17:56:09 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class ASpell
{
	public:

		ASpell( void );
		ASpell( const ASpell & );
		ASpell & operator=( const ASpell & );
		virtual ~ASpell( void );
};