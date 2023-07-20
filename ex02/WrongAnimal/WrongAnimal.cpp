/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 00:01:50 by vgejno            #+#    #+#             */
/*   Updated: 2023/07/13 21:10:49 by vgejno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	
	std::cout << "WrongAnimal created" << std::endl;
}

WrongAnimal::WrongAnimal( std::string type ) : _type(type) {

	std::cout << "WrongAnimal of type " << this->_type << " created" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& other ) {

	this->_type = other._type;
	std::cout << "Copy constructor on WrongAnimal " << this->_type << " called" << std::endl;
}

WrongAnimal::~WrongAnimal() {

	std::cout << "WrongAnimal " << this->_type << " destroyed" << std::endl;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal& other ) {

	if(this != &other) {
		
		this->_type = other._type;
	}
	std::cout << "Copy assignement operator on WrongAnimal " << this->_type << " called" << std::endl;

	return *this;
}

std::string WrongAnimal::getType() const {
	
	return _type;
}

void WrongAnimal::makeSound() const {

	std::cout << "WrongAnimal " << this->_type << " makes sound" << std::endl;
}
