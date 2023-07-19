/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 00:29:25 by vgejno            #+#    #+#             */
/*   Updated: 2023/07/19 21:10:34 by vgejno           ###   ########.fr       */
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
#define LB	"\033[38;5;39m"
#define VL	"\033[38;5;141m"
#define RES	"\033[0m"

#define NUM_ANIMALS 4

void printHeadline( std::string color, std::string msg) {

	std::cout << color << msg << RES << std::endl;
}

void sound_test(const Animal* j, const Animal* i) {

	// printHeadline( VL, "\tObjects created");

	// const Animal* j = new Dog();
	// const Animal* i = new Cat();

	printHeadline( GR, "\tAll make noise");

	j->makeSound();
	i->makeSound();

	// printHeadline( VL, "\tObjects deleted");


	
}

int main() {

	printHeadline( VL, "\tObjects created");

	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << std::endl;
	
	sound_test( j, i);
	
	const Animal* animals[NUM_ANIMALS];
	
	Brain* catBrain = nullptr;
	Brain* dogBrain = nullptr;
	
	std::cout << std::endl;
	printHeadline( VL, "\tTest copy Dog");

	Dog ju;
	Dog boo(ju);
	
	std::cout << std::endl;
	printHeadline( VL, "\tTest assignement operator Dog");

	Dog mu, gi;
	gi = mu;

	std::cout << std::endl;
	printHeadline( VL, "\tArray of Animals created");

	for (int idx = 0; idx < NUM_ANIMALS / 2; idx++) {

		animals[idx] = new Dog();
		std::cout << animals[idx]->getType() << " " << std::endl;
		animals[idx]->makeSound();
		// Dog* dogPtr = dynamic_cast<Dog*>( animals[idx]);
		// if( dogPtr != nullPtr ) {
			
 		// 	const dogPtr->getBrain()->idea[0] = "I want to play";
		// animals[idx]->getBrain()->idea[0] = "Bla";
			// std::cout << animals[idx]->getBrain()->idea[0] << std::endl;
		// }
		dogBrain = animals[idx]->getBrain();
		dogBrain->idea[0] = "\"I wanna play\"";
		std::cout << OR;
		std::cout << dogBrain->idea[0] << RES << std::endl;

	}
	
	for (int jdx = NUM_ANIMALS / 2; jdx < NUM_ANIMALS; jdx++) {

		animals[jdx] = new Cat();
		std::cout << animals[jdx]->getType() << " " << std::endl;
		animals[jdx]->makeSound();
		catBrain = animals[jdx]->getBrain();
		catBrain->idea[5] = "\"I just wanna sleep\"";
		std::cout << LB;
		std::cout << catBrain->idea[5] << RES << std::endl;
	}

	printHeadline( VL, "\tArray of Animals generating ideas");
	
	// if( catBrain != nullptr ) {
		
	// 	catBrain->idea[0] = "bal";
 	// 	std::cout << animals[2]->getBrain()->idea[0] << std::endl;
		
	// }
	
	
	dogBrain = animals[0]->getBrain();
	catBrain = animals[2]->getBrain();
	
	dogBrain->idea[0] = "Hmm, Should I just run?";
	
	std::cout << dogBrain->idea[0]<< std::endl;
	
	printHeadline( VL, "\tArray of Animals deleted");

	for( int k = 0; k < NUM_ANIMALS; k++ ) {
		
		std::cout << (k + 1) << std::endl;
		delete animals[k];
	}
	
	delete j;
	delete i;
	
	return 0;
}

	// dogBrain = brain->idea[0] = "Hmm, Should I just run?";


		// if( const Dog* dogPtr = dynamic_cast< const Dog* >(j)) {
			
		// std::cout << &dogBrain << std::endl;
		// 	brain = dogPtr->getBrain();
		// }

	// dogBrain = animals[0]->getBrain();
	// catBrain = animals[2]->getBrain();


		// if( const Cat* catPtr = dynamic_cast< const Cat* >(i)) {
			
		// 	brain = catPtr->getBrain();
			// if ( jdx % 2 == 0 ) {

			// 	std::cout << " \"" << brain->idea[0] << "\"" << std::endl;
			// }
		// }
		// delete i;
	// delete j;
	// delete i;

	// for (int idx = 0; idx < NUM_ANIMALS / 2; idx++) {

	// 	delete j;
	// }

	// for (int jdx = NUM_ANIMALS / 2; jdx < NUM_ANIMALS; jdx++) {

	// 	delete i;
	// }
	
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