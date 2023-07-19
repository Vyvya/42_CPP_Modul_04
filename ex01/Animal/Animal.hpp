/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 00:01:50 by vgejno            #+#    #+#             */
/*   Updated: 2023/07/19 19:49:35 by vgejno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

#include "../Brain/Brain.hpp"

class Animal {
	
	protected:
	
		std::string _type;

	public:

		Animal();
		Animal( std::string type );
		Animal( const Animal& other );
		virtual ~Animal();

		Animal& operator=( const Animal& other );
		
		std::string getType() const ;
		// void setType( std::string type );
		
		virtual void makeSound() const;
		virtual Brain* getBrain() const;
};

#endif