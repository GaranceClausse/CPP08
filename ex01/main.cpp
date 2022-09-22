/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 15:49:01 by gclausse          #+#    #+#             */
/*   Updated: 2022/09/22 15:26:07 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int generateNumber(void)
{
    return std::rand();
}

std::vector<int>    createRandomVector(unsigned int nb)
{
    std::vector<int>    tab(nb);

    std::generate(tab.begin(),tab.end(), generateNumber);
    return tab;
}

int main()
{

	std::cout << "Example form the subject with a container of size 5 filled with 6, 3, 17, 9, 11" << std::endl << std::endl;
	Span sp = Span(5);

	try
	{
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
	}
	catch(const std::exception& e)
	{
		std::cerr << COLOR RED << e.what() << COLOR RESET << std::endl << std::endl;	}
	try
	{
		std::cout << "Longest span : "<< sp.longestSpan() << std::endl;
		std::cout << "Shortest span : " << sp.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << COLOR RED << e.what() << COLOR RESET << std::endl << std::endl;
	}

	std::cout << std::endl;
	std::cout << "**********************************************************" << std::endl;
	std::cout << std::endl;
	std::cout << "Now let's show that it's not possible to add more than N elements" << std::endl << std::endl;
	std::cout << "Example with a container of size 2 filled with 6, 3, 17, 9, 11" << std::endl << std::endl;

	Span sp2 = Span(2);
	try
	{
		sp2.addNumber(6);
		sp2.addNumber(3);
		sp2.addNumber(17);
		sp2.addNumber(9);
		sp2.addNumber(11);
	}
	catch(const std::exception& e)
	{
		std::cerr << COLOR RED << e.what() << COLOR RESET << std::endl << std::endl;	}
	try
	{
		std::cout << "Longest span : "<< sp2.longestSpan() << std::endl;
		std::cout << "Shortest span : " << sp2.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << COLOR RED << e.what() << COLOR RESET << std::endl << std::endl;
	}

	std::cout << std::endl;
	std::cout << "**********************************************************" << std::endl;
	std::cout << std::endl;
	std::cout << "Now let's try with a big container of size 10 000 randomly and dumbly filled" << std::endl << std::endl;
	
	Span sp3 = Span(10000);
	try
	{
		for (unsigned int i = 0; i < sp3.getSize(); i++)
			sp3.addNumber(i);
	}
	catch(const std::exception& e)
	{
		std::cerr << COLOR RED << e.what() << COLOR RESET << std::endl << std::endl;	}
	try
	{
		std::cout << "Longest span : "<<sp3.longestSpan() << std::endl;
		std::cout << "Shortest span : " << sp3.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << COLOR RED << e.what() << COLOR RESET << std::endl << std::endl;
	}
	std::cout << std::endl;
	std::cout << "**********************************************************" << std::endl;
	std::cout << std::endl;
	std::cout << "Now let's try with a supeeeeer big container of size 50 000 randomly and cleverly filled" << std::endl << std::endl;
	
	
	std::srand(time(NULL));
	std::vector<int> big_vector(createRandomVector(50000));
	Span sp_superlong(50000);
	sp_superlong.vec = big_vector;

    try
    {
        std::cout << "Longest span : "<< sp_superlong.longestSpan() << std::endl;
    }
        catch(const std::exception& e)
    {
        std::cerr << "Error : " << e.what() <<  std::endl;
    }

    try
    {
        std::cout << "Shortest span : " << sp_superlong.shortestSpan() << std::endl;
    }
        catch(const std::exception& e)
    {
        std::cerr << "Error : " << e.what() <<  std::endl;
    }
	
	return 0;
}