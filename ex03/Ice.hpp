/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 15:25:56 by fvieira           #+#    #+#             */
/*   Updated: 2023/06/02 15:25:59 by fvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

# include "AMateria.hpp"

class Ice : private AMateria
{
public:
	Ice();
	Ice(const Ice& other);
	~Ice();

	Ice& operator=(const Ice& other);
	AMateria *clone() const;
	void use(ICharacter& target);
	
};
#endif
