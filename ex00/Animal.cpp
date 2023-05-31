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

void	Animal::setType(std::string type)
{
	this->type = type;
}
std::string Animal::getType(void)
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
	setType(other.getType());
}

Animal::~Animal()
{
	std::cout << "Animal Destructor\n";
}

Animal& Animal::operator=(const Animal& other)
{
	this->type = other.getType();
	return(*this);
}

void	Animal::makeSound(void)
{
	std::cout << "Shut up, " << getType() << " is about to speak!\n";
}

