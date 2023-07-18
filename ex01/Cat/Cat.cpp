/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 00:30:06 by vgejno            #+#    #+#             */
/*   Updated: 2023/07/18 20:23:04 by vgejno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "../Animal/Animal.hpp"

Cat::Cat() : Animal(), brain(new Brain()) {
	
	this->_type = "Cat";
	std::cout << "Cat born" << std::endl;
}

Cat::Cat( std::string type ) : Animal( type ) {

	brain = new Brain();
	std::cout << "Cat of type " << this->_type << " born" << std::endl;
}

Cat::Cat( const Cat& other ) {

	this->_type = other._type;
	brain = new Brain( *other.brain );
	std::cout << "Copy constructor on Cat " << this->_type << " called" << std::endl;
}

Cat::~Cat() {

	std::cout << "Cat" << " died" << std::endl;
}

Cat& Cat::operator=( const Cat& other ) {

	if(this != &other) {
		
		Animal::operator=( other ); //assign base class memebers
		
		delete brain;
		brain = new Brain(*other.brain);
		// this->_type = other._type;
	}
	std::cout << "Copy assignement operator on Cat " << this->_type << " called" << std::endl;

	return *this;
}

Brain* Cat::getBrain() const{
	
	std::cout << "Cat got an idea to " << this->_type << std::endl;
	return this->_brain;
}

void Cat::makeSound() const {

	std::cout << "Cat " << this->_type << " MIAOUUUUUUUU" << std::endl;
}