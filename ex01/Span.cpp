/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 15:48:48 by gclausse          #+#    #+#             */
/*   Updated: 2022/09/22 15:20:29 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
	//std::cout <<"Default constructor called" << std::endl;
}

Span::Span(unsigned int N) : _size(N), _fill(0)
{
	//std::cout <<"Param constructor called" << std::endl;
}

Span::Span(const Span &copy)
{
	operator=(copy);
}

unsigned int Span::getSize() const
{
	return (_size);
}


unsigned int Span::getFill() const
{
	return (_fill);
}

Span&	Span::operator=(Span const& copy)
{
	_size = copy.getSize();
	_fill = copy.getFill();
	return (*this);
}

Span::~Span()
{
	//std::cout <<"Destructor called" << std::endl;

}

void Span::addNumber(int num)
{
	if (_fill < _size)
	{
		vec.push_back(num);
		_fill++;
	}
	else
		throw(CantAdd());
}

int	Span::shortestSpan()
{
	if (_size < 2)
		throw (CantSpan());
	std::vector<int> sorted_vec = vec;
	std::sort(sorted_vec.begin(), sorted_vec.end());
	
	std::vector<int>::iterator it = sorted_vec.begin();
	int dif = *(it + 1) - *it;
	it++;
	while(it + 1 != sorted_vec.end())
	{
		if ((*(it + 1) - *it) < dif)
			dif = *(it + 1) - *it;
		it++;
	}
	return (dif);
}

int	Span::longestSpan()
{
	if (_size < 2)
		throw (CantSpan());
	std::vector<int>::iterator min_it = std::min_element(vec.begin(), vec.end());
	std::vector<int>::iterator max_it = std::max_element(vec.begin(), vec.end());

	int min_val = *min_it;
	int max_val = *max_it;

	return (max_val - min_val);
}



const char * Span::CantAdd::what()  const throw() {
				return (char *)"Your container is already full!";
			}


const char * Span::CantSpan::what()  const throw() {
				return (char *)"I can't span a container this small!";
			}