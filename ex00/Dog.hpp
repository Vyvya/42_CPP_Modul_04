/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 00:01:50 by vgejno            #+#    #+#             */
/*   Updated: 2023/07/20 22:28:49 by vgejno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

#include <iostream>
#include <string>

class Dog : public Animal {
	
	public:

		Dog();
		Dog( std::string name );
		Dog( const Dog& other );

		virtual ~Dog();

		Dog& operator=( const Dog& other);
		
		std::string getType();
		
		void makeSound() const;
			
};

#endif