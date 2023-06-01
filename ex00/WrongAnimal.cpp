/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 17:56:34 by fvieira           #+#    #+#             */
/*   Updated: 2023/06/01 17:56:36 by fvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

void	WrongAnimal::setType(const std::string type)
{
	this->type = type;
}

std::string WrongAnimal::getType(void) const
{
	return (this->type);
}

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal Default Constructor\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
	std::cout << "WrongAnimal Copy Constructor\n";
	*this = other;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor\n";
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	std::cout << "WrongAnimal Copy Assignment operator.\n";
	(std::string) this->type = other.getType();
	return (*this);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "WRONG ANIMAL NOISES\n";
}
