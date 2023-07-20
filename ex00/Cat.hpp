/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 00:01:50 by vgejno            #+#    #+#             */
/*   Updated: 2023/07/20 22:28:31 by vgejno           ###   ########.fr       */
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

		virtual ~Cat();

		Cat& operator=( const Cat& other );
		
		std::string getType() const;

		void makeSound() const;
			
};

#endif