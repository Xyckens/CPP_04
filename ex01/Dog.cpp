/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 21:57:44 by fvieira           #+#    #+#             */
/*   Updated: 2023/05/30 21:57:47 by fvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Dog Constructor.\n";
	this->ideas = new Brain();
	setType("Dog");
}

Dog::Dog(const Dog& other) : Animal(other)
{
	std::cout << " Dog Copy Constructor.\n";
	*this = other;
}

Dog::~Dog()
{
	delete this->ideas;
	std::cout << " Dog Destructor.\n";
}

Dog& Dog::operator=(const Dog& other)
{
	std::cout << "Dog Copy Assignment operator.\n";
	(std::string) this->type = other.getType();
	this->ideas = other.ideas;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "AAAAAWWWOOOOOOOOOOOOOOOOOOOOO\n";
}
