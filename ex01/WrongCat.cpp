/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 17:56:57 by fvieira           #+#    #+#             */
/*   Updated: 2023/06/01 17:56:59 by fvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "WrongCat Constructor.\n";
	setType("WrongCat");
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
	std::cout << " WrongCat Copy Constructor.\n";
	*this = other;
}

WrongCat::~WrongCat()
{
	std::cout << " WrongCat Destructor.\n";
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
	std::cout << "WrongCat Copy Assignment operator.\n";
	(std::string) this->type = other.getType();
	return (*this);
}

void	WrongCat::makeSound()
{
	std::cout << "MIAAAAAAAAAAAAAAAAAAAAUUUUUUUUUUU\n";
}
