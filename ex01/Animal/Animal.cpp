/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 00:01:50 by vgejno            #+#    #+#             */
/*   Updated: 2023/07/19 20:21:06 by vgejno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "../Brain/Brain.hpp"

Animal::Animal() {
	
	_type = "animal";
	std::cout << "Animal created" << std::endl;
}

Animal::Animal( std::string type ) : _type(type) {

	std::cout << "Animal of type " << this->_type << " created" << std::endl;
}

Animal::Animal( const Animal& other ) {

	this->_type = other._type;
	std::cout << "Copy constructor on Animal " << this->_type << " called" << std::endl;
}

Animal::~Animal() {

	std::cout << "Animal " << this->_type << " destroyed" << std::endl;
}

Animal& Animal::operator=( const Animal& other ) {

	if(this != &other) {
		
		this->_type = other._type;
	}
	std::cout << "Copy assignement operator on Animal " << this->_type << " called" << std::endl;

	return *this;
}

std::string Animal::getType() const {
	
	return _type;
}

void Animal::makeSound() const {

	std::cout << "Animal " << this->_type << " makes sound" << std::endl;
}

Brain* Animal::getBrain() const {

	return nullptr;
}

// std::ostream &operator<<( std::ostram &ostream, const Animal &instance ) {
	
// 	ostream << instance.getType();
// 	return ostream;
// }