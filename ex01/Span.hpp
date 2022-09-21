/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 15:48:32 by gclausse          #+#    #+#             */
/*   Updated: 2022/09/21 16:17:10 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <stdlib.h>
#include <vector>
# include <list>
#include <algorithm> 

class Span
{
	private:
		unsigned int _size;
		unsigned int	_fill;
		
	public:
		Span();
		Span(unsigned int N);
		~Span();

		

		void addNumber(int num);
		int	shortestSpan();
		int	longestSpan();
		

		std::vector<int> vec;
};

