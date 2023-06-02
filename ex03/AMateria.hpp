/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 15:25:33 by fvieira           #+#    #+#             */
/*   Updated: 2023/06/02 15:25:35 by fvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class AMateria
{
protected:
	const std::string type;
public:
	AMateria();
	AMateria(std::string const& type);
	AMateria(const AMateria& other);
	~AMateria();

	AMateria&	operator=(const AMateria& other);

	std::string const&	getType() const;

	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};
#endif
