/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 19:23:49 by fvieira           #+#    #+#             */
/*   Updated: 2023/06/01 19:23:51 by fvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor\n";
}

Brain::Brain(const Brain& other)
{
	std::cout << "Brain copy constructor\n";
	*this = other;
}

Brain& Brain::operator=(const Brain& other)
{
	std::cout << "Brain copy operator\n";
	this->ideas = other.ideas;
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destructor\n";
}

