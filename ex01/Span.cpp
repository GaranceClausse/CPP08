/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 15:48:48 by gclausse          #+#    #+#             */
/*   Updated: 2022/09/21 16:23:38 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
	std::cout <<"Default constructor called" << std::endl;
}

Span::Span(unsigned int N) : _size(N), _fill(0)
{
	std::cout <<"Param constructor called" << std::endl;
}

Span::~Span()
{
	std::cout <<"Destructor called" << std::endl;

}

void Span::addNumber(int num)
{
	if (_fill < _size)
	{
		vec.push_back(num);
		_fill++;
	}
	else
		throw(std::exception());
}

int	Span::shortestSpan()
{
	auto min_val = std::min_element(vec.begin(), vec.end());
}

int	Span::longestSpan()
{
	
}