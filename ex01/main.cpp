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
	new Animal* animal[size];
	for (int i = 0; i < size / 2; i++)
		animal[i] = new Dog();
	for (i; i < size; i++)
		animal[i] = new Cat();

	return 0;
}
