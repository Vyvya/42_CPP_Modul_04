/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 00:01:50 by vgejno            #+#    #+#             */
/*   Updated: 2023/07/19 18:11:54 by vgejno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "../Animal/Animal.hpp"
#include "../Brain/Brain.hpp"

#include <iostream>
#include <string>

class Dog : public Animal {
	
	private:

		Brain* _brain;

	public:

		Dog();
		Dog( std::string name );
		Dog( const Dog& other );

		~Dog();

		Dog& operator=( const Dog& other);
		
		void makeSound() const;
		Brain* getBrain() const;
			
};

#endif