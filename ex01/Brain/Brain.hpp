/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 10:53:14 by vgejno            #+#    #+#             */
/*   Updated: 2023/07/20 16:41:58 by vgejno           ###   ########.fr       */
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

		std::string getIdea( int num ) const;
		void setIdea( int num, std::string const &idea );
	
	private:
		
		std::string _idea[NUM_IDEAS];
};

#endif