/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 00:30:06 by vgejno            #+#    #+#             */
/*   Updated: 2023/07/13 21:35:47 by vgejno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat() : Animal() {
	
	this->_type = "Cat";
	std::cout << "Cat born" << std::endl;
}

Cat::Cat( std::string type ) : Animal( type ) {

	std::cout << "Cat of type " << this->_type << " born" << std::endl;
}

Cat::Cat( const Cat& other ) {

	this->_type = other._type;
	std::cout << "Copy constructor on Cat " << this->_type << " called" << std::endl;
}

Cat::~Cat() {

	std::cout << "Cat" << " died" << std::endl;
}

Cat& Cat::operator=( const Cat& other ) {

	if(this != &other) {
		
		this->_type = other._type;
	}
	std::cout << "Copy assignement operator on Cat " << this->_type << " called" << std::endl;

	return *this;
}

// std::string Cat::getType() const{
	
// 	return Animal::getType();
// }

void Cat::makeSound() const {

	std::cout << "Cat " << this->_type << " MIAOUUUUUUUU" << std::endl;
}