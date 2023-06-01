/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 17:56:40 by fvieira           #+#    #+#             */
/*   Updated: 2023/06/01 17:56:42 by fvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
protected:
	std::string type;
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal& other);
	~WrongAnimal();

	WrongAnimal& operator=(const WrongAnimal& other);

	void		setType(const std::string type);
	std::string	getType(void) const;
	
	void	makeSound(void) const;
	
};

#endif
