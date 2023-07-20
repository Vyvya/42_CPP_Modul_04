/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 00:01:50 by vgejno            #+#    #+#             */
/*   Updated: 2023/07/13 21:04:11 by vgejno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

#include <iostream>
#include <string>

class WrongCat : public WrongAnimal {
	
	public:

		WrongCat();
		WrongCat( std::string name );
		WrongCat( const WrongCat& other );

		~WrongCat();

		WrongCat& operator=( const WrongCat& other );
		
		std::string getType() const;
		
		void makeSound() const;
			
};

#endif