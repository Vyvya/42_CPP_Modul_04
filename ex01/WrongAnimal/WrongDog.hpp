/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 00:01:50 by vgejno            #+#    #+#             */
/*   Updated: 2023/07/13 21:22:55 by vgejno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGDOG_HPP
# define WRONGDOG_HPP

#include "WrongAnimal.hpp"

#include <iostream>
#include <string>

class WrongDog : public WrongAnimal {
	
	public:

		WrongDog();
		WrongDog( std::string name );
		WrongDog( const WrongDog& other );

		~WrongDog();

		WrongDog& operator=( const WrongDog& other);
		
		std::string getType();
		// void setType( std::string type );
		
		void makeSound() const;
			
};

#endif