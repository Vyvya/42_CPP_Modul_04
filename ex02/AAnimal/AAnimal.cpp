/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 00:01:50 by vgejno            #+#    #+#             */
/*   Updated: 2023/07/20 20:02:13 by vgejno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "../Brain/Brain.hpp"

AAnimal::AAnimal() {
	
	_type = "aanimal";
	std::cout << "AAnimal created" << std::endl;
}

AAnimal::AAnimal( std::string type ) : _type(type) {

	std::cout << "AAAnimal of type " << this->_type << " created" << std::endl;
}

AAnimal::AAnimal( const AAnimal& other ) {

	this->_type = other._type;
	std::cout << "Copy constructor on AAnimal " << this->_type << " called" << std::endl;
}

AAnimal::~AAnimal() {

	std::cout << "AAnimal " << this->_type << " destroyed" << std::endl;
}

AAnimal& AAnimal::operator=( const AAnimal& other ) {

	if(this != &other) {
		
		this->_type = other._type;
	}
	std::cout << "Copy assignement operator on AAnimal " << this->_type << " called" << std::endl;

	return *this;
}

std::string AAnimal::getType() const {
	
	return _type;
}

Brain* AAnimal::getBrain() const {

	return nullptr;
}

// std::ostream &operator<<( std::ostram &ostream, const AAnimal &instance ) {
	
// 	ostream << instance.getType();
// 	return ostream;
// }