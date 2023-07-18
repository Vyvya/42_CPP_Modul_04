/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 00:29:25 by vgejno            #+#    #+#             */
/*   Updated: 2023/07/18 20:11:44 by vgejno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal/Animal.hpp"
#include "Cat/Cat.hpp"
#include "Dog/Dog.hpp"
#include "Brain/Brain.hpp"
#include "WrongAnimal/WrongAnimal.hpp"
#include "WrongAnimal/WrongCat.hpp"
#include "WrongAnimal/WrongDog.hpp"

#define GR	"\033[38;5;118m"
#define OR	"\033[38;5;208m"
#define VL	"\033[38;5;141m"
#define RES	"\033[0m"

// #define NUM_IDEAS 100

void printHeadline( std::string color, std::string msg) {

	std::cout << color << msg << RES << std::endl;
}

int main() {

	printHeadline( VL, "\tObjects created");

	const Animal* j = new Dog();
	const Animal* i = new Cat();

	Brain brain[NUM_IDEAS];
	
	printHeadline( VL, "\tGet types");
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	
	for( int idx = 0; idx < NUM_IDEAS / 2; idx++ ) {

		brain[idx] = *i;
		std::cout << "Cat got brain" << std::endl;
	}
	delete j;
	delete i;
	// printHeadline( GR, "\tAll make noise");

	// i->makeSound();
	// j->makeSound();
	// meta->makeSound();

	// printHeadline( VL, "\tObjects destroyed");
	
	// delete meta;
	
	// printHeadline( VL, "\tWrongObjects created");

	// const WrongAnimal* wrongMeta = new WrongAnimal();
	// const WrongAnimal* wrongJ = new WrongDog();
	// const WrongAnimal* wrongI = new WrongCat();

	// printHeadline( VL, "\tGet types");

	// std::cout << wrongJ->getType() << " " << std::endl;
	// std::cout << wrongI->getType() << " " << std::endl;

	// printHeadline( OR, "\tAnimal makes noise");

	// wrongI->makeSound();
	// wrongJ->makeSound();
	// wrongMeta->makeSound();

	// printHeadline( VL, "\tObjects destroyed");
	
	// delete wrongMeta;
	// delete wrongJ;
	// delete wrongI;
	
	return 0;
}