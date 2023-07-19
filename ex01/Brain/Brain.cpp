/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 10:55:03 by vgejno            #+#    #+#             */
/*   Updated: 2023/07/19 17:33:30 by vgejno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {

	// std::cout << "Brain formed" << std::endl;
}

Brain::Brain( const Brain& other ) {
	
	if( this != &other ) {
		
		for( int i = 0; i < NUM_IDEAS; i++ ) {

			idea[i] = other.idea[i];
		} 
	}
	   std::cout << "Copy of Brain formed" << std::endl;
}

Brain::~Brain() {

	// for(int j = 0; j < NUM_IDEAS; j++ ) {
		
	// 	// delete idea[j];
	// } 
	std::cout << "Brain nihiliated" << std::endl;
}

Brain& Brain::operator=( const Brain& other ) {

	if( this != &other ) {
		
		for( int i = 0; i < NUM_IDEAS; i++ ) {

			idea[i] = other.idea[i];
		} 
	}

	std::cout << "Copy assignement operator of Brain called" << std::endl;
	return ( *this );
}

