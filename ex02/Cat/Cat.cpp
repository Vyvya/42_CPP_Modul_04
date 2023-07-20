/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 00:30:06 by vgejno            #+#    #+#             */
/*   Updated: 2023/07/20 19:48:48 by vgejno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "../AAnimal/AAnimal.hpp"

Cat::Cat() { // : AAnimal()
	
	this->_type = "Cat";
	_brain = new Brain();
	std::cout << "Cat born" << std::endl;
}

Cat::Cat( std::string type ) : AAnimal( type ) {

	_brain = new Brain();
	std::cout << "Cat of type " << this->_type << " born" << std::endl;
}

Cat::Cat( const Cat& other ) {

	this->_type = other._type;
	_brain = new Brain( *other._brain ); // Deep copying of the Brain object
	std::cout << "Copy constructor on Cat called" << std::endl;
}

Cat::~Cat() {

	delete this->_brain;
	std::cout << "Cat" << " died" << std::endl;
}

Cat& Cat::operator=( const Cat& other ) {

	if(this != &other) {
		
		delete this->_brain; // Delete existing brain before creating a new copy
		this->_type = other._type;
		_brain = new Brain(*other._brain); // Deep copying of the Brain object
	}
	std::cout << "Copy assignement operator on Cat called" << std::endl;

	return *this;
}

Brain* Cat::getBrain() const {
	
	std::cout << "Cat got a kitty's idea in his brain:" << std::endl;
	return this->_brain;
}

void Cat::makeSound() const {

	std::cout << "Cat says: MIAOUUUUUUUU" << std::endl; //this->_type << 
}