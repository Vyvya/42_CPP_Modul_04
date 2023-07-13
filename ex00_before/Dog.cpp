/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 00:30:16 by vgejno            #+#    #+#             */
/*   Updated: 2023/07/13 01:29:25 by vgejno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal() {
	
	std::cout << "Dog born" << std::endl;
}

Dog::Dog( std::string type ) : Animal( type ) {

	std::cout << "Dog " << this->_type << " born" << std::endl;
}

Dog::Dog( const Dog& other ) {

	this->_type = other._type;
	std::cout << "Copy constructor on Dog " << this->_type << " called" << std::endl;
}

Dog::~Dog() {

	std::cout << "Dog " << this->_type << " died" << std::endl;
}

Dog& Dog::operator=( const Dog& other ) {

	if(this != &other) {
		
		this->_type = other._type;
	}
	std::cout << "Copy assignement operator on Dog " << this->_type << " called" << std::endl;

	return *this;
}

// std::string Dog::getType() {
	
// 	return this->type;
// }

// void Dog::setType( std::string type ) {

// 	this->type = type;
// }

void Dog::makeSound() {

	std::cout << "Dog" << this->_type << " OUF! OUF! OUF!" << std::endl;
}