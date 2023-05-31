/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 21:58:39 by fvieira           #+#    #+#             */
/*   Updated: 2023/05/30 21:58:43 by fvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"

class Dog, virtual Animal
{
public:
	Dog();
	Dog(const Dog& other);
	~Dog();

	Dog& operator=(const Dog& other);

	void	makeSound();
	
};

#endif
