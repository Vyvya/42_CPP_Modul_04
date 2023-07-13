/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 00:29:25 by vgejno            #+#    #+#             */
/*   Updated: 2023/07/13 22:41:25 by vgejno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"

#define GR	"\033[38;5;118m"
#define OR	"\033[38;5;208m"
#define VL	"\033[38;5;141m"
#define RES	"\033[0m"

void printHeadline( std::string color, std::string msg) {

	std::cout << color << msg << RES << std::endl;
}

int main() {

	printHeadline( VL, "\tObjects created");

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	printHeadline( VL, "\tGet types");
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	
	printHeadline( GR, "\tAll make noise");

	i->makeSound();
	j->makeSound();
	meta->makeSound();

	printHeadline( VL, "\tObjects destroyed");
	
	delete meta;
	delete j;
	delete i;
	
	printHeadline( VL, "\tWrongObjects created");

	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* wrongJ = new WrongDog();
	const WrongAnimal* wrongI = new WrongCat();

	printHeadline( VL, "\tGet types");

	std::cout << wrongJ->getType() << " " << std::endl;
	std::cout << wrongI->getType() << " " << std::endl;

	printHeadline( OR, "\tAnimal makes noise");

	wrongI->makeSound();
	wrongJ->makeSound();
	wrongMeta->makeSound();

	printHeadline( VL, "\tObjects destroyed");
	
	delete wrongMeta;
	delete wrongJ;
	delete wrongI;
	
	return 0;
}