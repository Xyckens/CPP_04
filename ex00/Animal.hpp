/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 21:58:22 by fvieira           #+#    #+#             */
/*   Updated: 2023/05/30 21:58:24 by fvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
protected:
	std::string type;
public:
	Animal();
	Animal(const Animal& other);
	~Animal();

	Animal& operator=(const Animal& other);

	void		setType(std::string type);
	std::string	getType(void);
	
	void	makeSound(void);
	
};
#endif
