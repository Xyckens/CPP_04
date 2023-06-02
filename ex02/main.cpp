/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 16:02:04 by fvieira           #+#    #+#             */
/*   Updated: 2023/06/01 16:02:07 by fvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(void)
{
	int	size = 100;
	const Animal* animal[size];
	for (int i = 0; i < size / 2; i++)
	{
		std::cout << "i = " << i << ":\n";
		animal[i] = new Dog();
	}
	for (int i = size / 2 ; i < size; i++)
	{
		std::cout << "i = " << i << ":\n";
		animal[i] = new Cat();
	}
	for (int i = 0; i < size; i++)
		delete animal[i];

	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	delete j;
	delete i;
	return 0;
}
