/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 00:30:06 by vgejno            #+#    #+#             */
/*   Updated: 2023/07/13 21:12:58 by vgejno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
	
	this->_type = "Cat";
	std::cout << "WrongCat born" << std::endl;
}

WrongCat::WrongCat( std::string type ) : WrongAnimal( type ) {

	std::cout << "WrongCat of type " << this->_type << " born" << std::endl;
}

WrongCat::WrongCat( const WrongCat& other ) {

	this->_type = other._type;
	std::cout << "Copy constructor on WrongCat " << this->_type << " called" << std::endl;
}

WrongCat::~WrongCat() {

	std::cout << "WrongCat" << " died" << std::endl;
}

WrongCat& WrongCat::operator=( const WrongCat& other ) {

	if(this != &other) {
		
		this->_type = other._type;
	}
	std::cout << "Copy assignement operator on WrongCat " << this->_type << " called" << std::endl;

	return *this;
}

// std::string WrongCat::getType() const{
	
// 	return WrongAnimal::getType();
// }

void WrongCat::makeSound() const {

	std::cout << "WrongCat " << this->_type << " MIAOUUUUUUUU" << std::endl;
}