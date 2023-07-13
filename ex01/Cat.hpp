/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 00:01:50 by vgejno            #+#    #+#             */
/*   Updated: 2023/07/13 21:04:11 by vgejno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

#include <iostream>
#include <string>

class Cat : public Animal {
	
	public:

		Cat();
		Cat( std::string name );
		Cat( const Cat& other );

		~Cat();

		Cat& operator=( const Cat& other );
		
		std::string getType() const;
		// void setType( std::string type );
		void makeSound() const;
			
};

#endif