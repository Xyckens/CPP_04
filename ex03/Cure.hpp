/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 15:26:09 by fvieira           #+#    #+#             */
/*   Updated: 2023/06/02 15:26:10 by fvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

# include "AMateria.hpp"

class Cure : private AMateria
{
public:
	Cure();
	Cure(const Cure& other);
	~Cure();

	Cure& operator=(const Cure& other);
	AMateria *clone() const;
	void use(ICharacter& target);
	
};
#endif
