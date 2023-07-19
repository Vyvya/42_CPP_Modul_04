/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 10:53:14 by vgejno            #+#    #+#             */
/*   Updated: 2023/07/19 12:59:42 by vgejno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

#define NUM_IDEAS 100

class Brain {
	
	public:

		Brain();
		Brain( const Brain& other );
		
		~Brain();
		
		Brain& operator=( const Brain& other );
		
		std::string idea[NUM_IDEAS];
};

#endif