/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 00:01:50 by vgejno            #+#    #+#             */
/*   Updated: 2023/07/13 21:06:45 by vgejno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal {
	
	protected:
	
		std::string _type;

	public:

		WrongAnimal();
		WrongAnimal( std::string type );
		WrongAnimal( const WrongAnimal& other );
		~WrongAnimal(); //virtual 

		WrongAnimal& operator=( const WrongAnimal& other );
		
		std::string getType() const; //{return _type;}
		// void setType( std::string type );
		
		void makeSound() const; //virtual 
			
};

#endif