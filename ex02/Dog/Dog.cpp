/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 00:30:16 by vgejno            #+#    #+#             */
/*   Updated: 2023/07/20 22:25:34 by vgejno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "../AAnimal/AAnimal.hpp"

Dog::Dog() : AAnimal() {
	
	this->_type = "Dog";
	this->_brain = new Brain();
	std::cout << "Dog born" << std::endl;
}

Dog::Dog( std::string type ) : AAnimal( type ) {

	_type = type;
	_brain = new Brain();
	std::cout << "Dog named " << this->_type << " born" << std::endl;
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
		
		AAnimal::operator=(other); // Call the base class assignment operator
		delete this->_brain; // Delete the current _brain to avoid memory leaks
		_brain = new Brain( *other._brain );  // Deep copy the _brain from the other Dog
	}
	
	std::cout << "Copy assignement operator on Dog called" << std::endl;

	return *this;
}

Brain* Dog::getBrain() const {
	
	std::cout << "Dog got a doggy's idea in his brain:" << std::endl;
	return this->_brain;
}


void Dog::makeSound() const {

	std::cout << "Dog says: OUF! OUF! OUF!" << std::endl; //this->_type << 
}

std::string Dog::getDogIdea( int num ) const {

	return this->_brain->getIdea( num );
}

void Dog::setDogIdea( int num, std::string dogIdea ) {
	
	this->_brain->setIdea( num, dogIdea );
}
