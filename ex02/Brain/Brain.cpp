/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 10:55:03 by vgejno            #+#    #+#             */
/*   Updated: 2023/07/20 22:25:51 by vgejno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {

	// std::cout << "Brain formed" << std::endl;
}

Brain::Brain( const Brain& other ) {
	
	if( this != &other ) {
		
		for( int i = 0; i < NUM_IDEAS; i++ ) {

			_idea[i] = other._idea[i];
		} 
	}
	   std::cout << "Copy of Brain formed" << std::endl;
}

Brain::~Brain() {
 
	std::cout << "Brain nihiliated" << std::endl;
}

Brain& Brain::operator=( const Brain& other ) {

	if( this != &other ) {
		
		for( int i = 0; i < NUM_IDEAS; i++ ) {

			_idea[i] = other._idea[i];
		} 
	}

	std::cout << "Copy assignement operator of Brain called" << std::endl;
	return ( *this );
}

std::string Brain::getIdea( int num ) const {

	if( num < 0 || num > NUM_IDEAS ) {
		
		std::cout << "Error getIdea: Number out of range" << std::endl;
		return "";
	}
	
	return this->_idea[num];
}

void Brain::setIdea( int num, std::string const& idea ) {

	if( num < 0 || num > NUM_IDEAS ) {
		
		std::cout << "Error setIdea: Number out of range" << std::endl;
		return ;
	}
	
	this->_idea[num] = idea;
	std::cout << "Idea: " << idea << " set into Brain at position: " << num << std::endl;
}
