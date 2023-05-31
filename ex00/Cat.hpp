/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 21:58:30 by fvieira           #+#    #+#             */
/*   Updated: 2023/05/30 21:58:32 by fvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"

class Cat, virtual Animal
{
public:
	Cat();
	Cat(const Cat& other);
	~Cat();

	Cat& operator=(const Cat& other);

	void	makeSound();
	
};
#endif
