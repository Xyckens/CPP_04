/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 15:25:51 by fvieira           #+#    #+#             */
/*   Updated: 2023/06/02 15:25:52 by fvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice default constructor.\n";
}

Ice::Ice(const Ice& other) : AMateria(other)
{
	std::cout << "Ice default copy constructor.\n";
}

Ice::~Ice()
{
	std::cout << "Ice destructor.\n";
}

Ice& Ice::operator=(const Ice& other)
{
	std::cout << "Ice copy operator.\n";
	this->type = other.type;
	return (*this);
}

AMateria Ice::*clone() const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *\n";
}
