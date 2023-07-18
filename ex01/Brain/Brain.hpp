/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 10:53:14 by vgejno            #+#    #+#             */
/*   Updated: 2023/07/18 20:25:21 by vgejno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

#define NUM_IDEAS 5

class Brain {
	
	public:

		Brain();
		Brain( const Animal& animal );
		
		~Brain();
		
		Brain& operator=( const Brain& other );
		
		std::string brain[NUM_IDEAS];
};

#endif