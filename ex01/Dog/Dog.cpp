/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 00:30:16 by vgejno            #+#    #+#             */
/*   Updated: 2023/07/19 21:09:56 by vgejno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "../Animal/Animal.hpp"

Dog::Dog() : Animal() {
	
	this->_type = "Dog";
	this->_brain = new Brain();
	std::cout << "Dog born" << std::endl;
}

Dog::Dog( std::string type ) : Animal( type ) {

	std::cout << "Dog " << this->_type << " born" << std::endl;
}

Dog::Dog( const Dog& other ) {

	this->_type = other._type;
	_brain = new Brain( *other._brain);

	std::cout << "Copy constructor on Dog called" << std::endl;
}

Dog::~Dog() {

	delete this->_brain;
	std::cout << "Dog died" << std::endl;
}

Dog& Dog::operator=( const Dog& other ) {

	if(this != &other) {
		
		delete this->_brain;
		this->_type = other._type;
		_brain = new Brain( *other._brain );
	}
	
	std::cout << "Copy assignement operator on Dog called" << std::endl;

	return *this;
}

Brain* Dog::getBrain() const {
	
	std::cout << "Dog got a doggy's idea in his brain" << std::endl;
	return this->_brain;
}

// std::string Dog::getType() {
	
// 	// return this->_type;
// 	return Animal::getType();
// }

// void Dog::setType( std::string type ) {

// 	this->type = type;
// }

void Dog::makeSound() const {

	std::cout << "Dog " << this->_type << " OUF! OUF! OUF!" << std::endl;
}