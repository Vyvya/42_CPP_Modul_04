/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 00:01:50 by vgejno            #+#    #+#             */
/*   Updated: 2023/07/20 22:25:58 by vgejno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>
#include <string>

#include "../Brain/Brain.hpp"

class AAnimal {
	
	protected:
	
		std::string _type;

	public:

		AAnimal();
		AAnimal( std::string type );
		AAnimal( const AAnimal& other );
		virtual ~AAnimal();

		AAnimal& operator=( const AAnimal& other );
		
		std::string getType() const ;
		
		virtual void makeSound() const = 0; //pure method
		virtual Brain* getBrain() const; 
};

#endif