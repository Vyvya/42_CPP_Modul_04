/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 10:55:03 by vgejno            #+#    #+#             */
/*   Updated: 2023/07/18 20:26:29 by vgejno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {

	std::cout << "Brain formed" << std::endl;
}

Brain::Brain( const Animal& animal ) {
	
	// if( this != &other ) {
		
	// 	for( int i = 0; i < NUM_IDEAS; i++ ) {

	// 		brain[i] = other.brain[i];
	// 	} 
	// }
	// std::cout << "Copy of Brain formed" << std::endl;
	
	   std::cout << "Copy of Brain formed" << std::endl;
    // Copy the brain information from the animal
    // Update the code here to extract the brain information from the Animal object
    // and store it in the brain array
    // for (int i = 0; i < NUM_IDEAS; i++) {
    //     brain[i] = animal.getBrain()[i];
    // }
}

Brain::~Brain() {

	std::cout << "Brain nihiliated" << std::endl;
}

Brain& Brain::operator=( const Brain& other ) {

	if( this != &other ) {
		
		for( int i = 0; i < NUM_IDEAS; i++ ) {

			brain[i] = other.brain[i];
		} 
	}
	std::cout << "Copy assignement operator of Brain called" << std::endl;
	return ( *this );
}

