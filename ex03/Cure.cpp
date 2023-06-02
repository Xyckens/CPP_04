/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 15:26:19 by fvieira           #+#    #+#             */
/*   Updated: 2023/06/02 15:26:21 by fvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure default constructor.\n";
}

Cure::Cure(const Cure& other) : AMateria(other)
{
	std::cout << "Cure default copy constructor.\n";
}

Cure::~Cure()
{
	std::cout << "Cure destructor.\n";
}

Cure& Cure::operator=(const Cure& other)
{
	std::cout << "Cure copy operator.\n";
	this->type = other.type;
	return (*this);
}

AMateria Cure::*clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *\n";
}

