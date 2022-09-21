/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 14:30:47 by gclausse          #+#    #+#             */
/*   Updated: 2022/09/21 15:47:06 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"


int	main()
{
	int	found;
	std::vector<int> vec;
	std::list<int> list;

    vec.push_back(-1);
    vec.push_back(0);
    vec.push_back(2);
    vec.push_back(3);

    list.push_back(-5);
    list.push_back(47);
    list.push_back(42);
    list.push_back(569);

	std::cout << std::endl;
	std::cout << "Let's try to find the number 0 in the vector container[-1, 0, 2, 3]" << std::endl;
	try {
		found = easyfind(vec, 0);
		std::cout << "Number " << found << " has been found in the vector container at the index " << index(vec, 0) << std::endl<< std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	std::cout << "***************************************************************" << std::endl << std::endl; 
	std::cout << "Let's try to find the number 0 in the list container[-5, 47, 42, 569]" << std::endl;

	try {
		found = easyfind(list, 0);
		std::cout << "Number " << found << " has been found in the list container at the index " << index(vec, 0)  << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl<< std::endl;
	}
	std::cout << "***************************************************************" << std::endl << std::endl; 
	std::cout << "Let's try to find the number 42 in the list container[-5, 47, 42, 569]" << std::endl;

	try {
		found = easyfind(list, 42);
		std::cout << "Number " << found << " has been found in the list container at the index " << index(list, 42)  << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
}