/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 21:57:55 by fvieira           #+#    #+#             */
/*   Updated: 2023/05/30 21:57:58 by fvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat Constructor.\n";
	this->ideas = new Brain();
	setType("Cat");
}

Cat::Cat(const Cat& other) : Animal(other)
{
	std::cout << " Cat Copy Constructor.\n";
	*this = other;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor.\n";
	delete this->ideas;
}

Cat& Cat::operator=(const Cat& other)
{
	std::cout << "Cat Copy Assignment operator.\n";
	*this = other;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "MIAAAAAAAAAAAAAAAAAAAAUUUUUUUUUUU\n";
}

