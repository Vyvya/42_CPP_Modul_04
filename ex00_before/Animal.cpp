/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 00:01:50 by vgejno            #+#    #+#             */
/*   Updated: 2023/07/13 18:58:54 by vgejno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	
	std::cout << "Animal created" << std::endl;
}

Animal::Animal( std::string type ) : _type(type) {

	std::cout << "Animal " << this->_type << " created" << std::endl;
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

void Animal::setType( std::string type ) {

	this->_type = type;
}
