/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 00:01:50 by vgejno            #+#    #+#             */
/*   Updated: 2023/07/20 20:03:21 by vgejno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "../Animal/Animal.hpp"
#include "../Brain/Brain.hpp"

#include <iostream>
#include <string>

class Cat : public Animal {
	
	private:

		Brain* _brain;

	public:

		Cat();
		Cat( std::string name );
		Cat( const Cat& other );

		virtual ~Cat();

		Cat& operator=( const Cat& other );
		
		std::string getType() const;
		void makeSound() const;

		Brain* getBrain() const;
		
};

#endif