/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 00:30:06 by vgejno            #+#    #+#             */
/*   Updated: 2023/07/13 01:27:53 by vgejno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal() {
	
	std::cout << "Cat born" << std::endl;
}

Cat::Cat( std::string type ) : Animal( type ) {

	std::cout << "Cat " << getType() << " born" << std::endl;
}

Cat::Cat( const Cat& other ) {

	setType( other.getType() );
	std::cout << "Copy constructor on Cat " << getType() << " called" << std::endl;
}

Cat::~Cat() {

	std::cout << "Cat " << getType() << " died" << std::endl;
}

Cat& Cat::operator=( const Cat& other ) {

	if(this != &other) {
		
		setType( other.getType() );
	}
	std::cout << "Copy assignement operator on Cat " << getType() << " called" << std::endl;

	return *this;
}

std::string Cat::getType() const{
	
	return Animal::getType();
}


void Cat::makeSound() {

	std::cout << "Cat" << getType() << " MIAOUUUUUUUU" << std::endl;
}