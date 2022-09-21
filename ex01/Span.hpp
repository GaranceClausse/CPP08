/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 15:48:32 by gclausse          #+#    #+#             */
/*   Updated: 2022/09/21 17:27:42 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <stdlib.h>
#include <vector>
# include <list>
#include <algorithm> 


#define COLOR "\033[;"
#define RED "31m"
#define GREEN "32m"
#define YELLOW "33m"
#define BLUE "34m"
#define MAGENTA "35m"
#define CYAN "36m"
#define B_RED "41m"
#define B_GREEN "42m"
#define B_YELLOW "43m"
#define B_BLUE	"44m"
#define RESET "\033[0m"

class Span
{
	private:
		unsigned int _size;
		unsigned int	_fill;
		
	public:
		Span();
		Span(unsigned int N);
		Span&operator=(Span const& copy);
		Span(const Span &copy);
		~Span();

		unsigned int getSize() const;
		unsigned int getFill() const;

		void addNumber(int num);
		int	shortestSpan();
		int	longestSpan();

		class CantSpan : public std::exception
		{
		public:
			virtual const char * what()  const throw();
		};
		
		class CantAdd : public std::exception
		{
		public:
			virtual const char * what() const throw();
		};
		

		std::vector<int> vec;
};

