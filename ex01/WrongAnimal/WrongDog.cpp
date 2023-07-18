/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 00:30:16 by vgejno            #+#    #+#             */
/*   Updated: 2023/07/13 21:08:32 by vgejno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.hpp"
#include "WrongAnimal.hpp"

WrongDog::WrongDog() : WrongAnimal() {
	
	this->_type = "Dog";
	std::cout << "WrongDog born" << std::endl;
}

WrongDog::WrongDog( std::string type ) : WrongAnimal( type ) {

	std::cout << "WrongDog " << this->_type << " born" << std::endl;
}

WrongDog::WrongDog( const WrongDog& other ) {

	this->_type = other._type;
	std::cout << "Copy constructor on WrongDog " << this->_type << " called" << std::endl;
}

WrongDog::~WrongDog() {

	std::cout << "WrongDog " << this->_type << " died" << std::endl;
}

WrongDog& WrongDog::operator=( const WrongDog& other ) {

	if(this != &other) {
		
		this->_type = other._type;
	}
	std::cout << "Copy assignement operator on WrongDog " << this->_type << " called" << std::endl;

	return *this;
}

// std::string WrongDog::getType() {
	
// 	// return this->_type;
// 	return WrongAnimal::getType();
// }

// void WrongDog::setType( std::string type ) {

// 	this->type = type;
// }

void WrongDog::makeSound() const {

	std::cout << "WrongDog " << this->_type << " OUF! OUF! OUF!" << std::endl;
}