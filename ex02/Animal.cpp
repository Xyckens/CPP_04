/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 21:58:15 by fvieira           #+#    #+#             */
/*   Updated: 2023/05/30 21:58:16 by fvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

void	Animal::setType(const std::string type)
{
	this->type = type;
}

std::string Animal::getType(void) const
{
	return (this->type);
}

Animal::Animal()
{
	std::cout << "Animal Default Constructor\n";
}

Animal::Animal(const Animal& other)
{
	std::cout << "Animal Copy Constructor\n";
	*this = other;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor\n";
}

Animal& Animal::operator=(const Animal& other)
{
	std::cout << "Animal Copy Assignment operator.\n";
	(std::string) this->type = other.getType();
	return (*this);
}

void	Animal::makeSound(void) const
{
	std::cout << "Shut up\n";
}

