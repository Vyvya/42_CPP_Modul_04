/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 00:29:25 by vgejno            #+#    #+#             */
/*   Updated: 2023/07/20 22:26:18 by vgejno           ###   ########.fr       */
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
#define YL	"\033[38;5;226m"
#define RD	"\033[38;5;196m"
#define BL "\033[38;5;27m"
#define GN "\033[38;5;34m"
#define LY	"\033[93m"
#define RES	"\033[0m"

#define NUM_ANIMALS 4

void printHeadline( std::string color, std::string msg) {

	std::cout << color << msg << RES << std::endl;
}

void sound_test(const Animal* j, const Animal* i) {
	
	printHeadline( VL, "_____All make noise_____");

	std::cout << GR;
	j->makeSound();
	i->makeSound();
	std::cout << RES;
}

void copy_idea_test() {
	
	std::cout << std::endl;
	printHeadline( VL, "_____Test copy Dog_____");

	Dog ju;
	Dog boo(ju);
	
	std::cout << std::endl;
	printHeadline( VL, "_____Brain set into parent dog_____");
	
	ju.getBrain()->setIdea( 9, "I love sausages");
	
	std::cout << YL;
	std::cout << ju.getType() << " Ju has one only idea: " << ju.getDogIdea(9) << std::endl;
	std::cout << ju.getType() << " Boo has the idea: " << boo.getDogIdea(9) << RES << std::endl;
	
	std::cout << std::endl;
	printHeadline( VL, "_____Brain set into copied dog_____");

	boo.getBrain()->setIdea( 9, "I love raw meet");
	
	std::cout << RD;
	std::cout << ju.getType() << " Ju has one only idea: " << ju.getDogIdea(9) << std::endl;
	std::cout << ju.getType() << " Boo has the idea: " << boo.getDogIdea(9) << RES << std::endl;
	
	std::cout << std::endl;
	printHeadline( VL, "_____Test assignement operator Dog_____");

	Dog mu, gi;

	mu.getBrain()->setIdea( 2, "BRRRRRRRRRR");
	
	std::cout << BL;
	std::cout << mu.getType() << " Mu has an idea: " << mu.getDogIdea(2) << std::endl;
	std::cout << gi.getType() << " Gi has the idea: " << gi.getDogIdea(2) << RES << std::endl;
	
	std::cout << std::endl;
	printHeadline( VL, "_____Deep Copy_____");
	
	gi = mu;

	std::cout << GN;
	std::cout << mu.getType() << " Mu has one only idea: " << mu.getDogIdea(2) << std::endl;
	std::cout << gi.getType() << " Gi has the idea: " << gi.getDogIdea(2) << RES << std::endl;
	
	std::cout << std::endl;
	printHeadline( VL, "_____Copied dog changes idea_____");
	
	gi.getBrain()->setIdea( 2, "ouuuuuuuuuuuuuuu");

	std::cout << LY;
	std::cout << mu.getType() << " Mu has one only idea: " << mu.getDogIdea(2) << std::endl;
	std::cout << gi.getType() << " Gi has the idea: " << gi.getDogIdea(2) << RES << std::endl;
	
	std::cout << std::endl;

}

void copy_test() {
	
	printHeadline( VL, "_____Test copy Dog_____");

	Dog ju;
	Dog boo(ju);
	
	std::cout << std::endl;
	
	printHeadline( VL, "_____Test assignement operator Dog_____");

	Dog mu, gi;
	gi = mu;
}

int main() {

	printHeadline( VL, "_____Objects created_____");

	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << std::endl;
	
	sound_test( j, i);
	std::cout << std::endl;
	
	const Animal* animals[NUM_ANIMALS];
	
	Brain* catBrain = nullptr;
	Brain* dogBrain = nullptr;
	
	copy_test();
	std::cout << std::endl;
	
	printHeadline( VL, "_____Array of Animals created_____");

	for (int idx = 0; idx < NUM_ANIMALS; idx++) {

		if ( idx < NUM_ANIMALS / 2 ) {

			animals[idx] = new Dog();
			std::cout << animals[idx]->getType() << " " << std::endl;
			animals[idx]->makeSound();
			dogBrain = animals[idx]->getBrain();
			
			dogBrain->setIdea(0, "I wanna play");
			dogBrain->setIdea(1, "That smells good");
			
			std::cout << OR;
			if( (idx) % 2 == 0 ) {
				
				std::cout << animals[idx]->getType() << ": " << dogBrain->getIdea(0) << RES << std::endl;
			} else {
				
				std::cout << animals[idx]->getType() << ": " << dogBrain->getIdea(1) << RES << std::endl;
			}
			std::cout << RES;

		} else {

			animals[idx] = new Cat();
			std::cout << animals[idx]->getType() << " " << std::endl;
			animals[idx]->makeSound();
			catBrain = animals[idx]->getBrain();
			catBrain->setIdea(6, "I just wanna sleep");
			catBrain->setIdea(7, "Give me food");

			std::cout << LB;
			if( idx % 2 == 0 ) {

				std::cout << animals[idx]->getType() << ": " << catBrain->getIdea(6) << std::endl;
			} else {
				
				std::cout << animals[idx]->getType() << ": " << catBrain->getIdea(7) << std::endl;
			}
			std::cout << RES;
		}
	}

	copy_idea_test();
	std::cout << std::endl;
	
	printHeadline( VL, "_____Array of Animals deleted_____");

	for( int k = 0; k < NUM_ANIMALS; k++ ) {
		
		delete animals[k];
	}
	
	delete j;
	delete i;
	
	return 0;
}
