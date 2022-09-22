/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 12:19:02 by gclausse          #+#    #+#             */
/*   Updated: 2022/09/22 15:01:19 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	std::cout << COLOR BLUE << "Let's create a stack an push 5 then 17" << COLOR RESET << std::endl << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << COLOR YELLOW <<"At the top of the stack we have : " << COLOR RESET << mstack.top() << std::endl << std::endl;
	mstack.pop();
	std::cout <<  COLOR BLUE <<"Let's pop() the stack," << COLOR YELLOW << "the size is now : " << COLOR RESET << mstack.size() << COLOR YELLOW << " and the top is " << COLOR RESET << mstack.top()<< std::endl <<std::endl;
	std::cout <<  COLOR BLUE <<"Let's push 3, 5, 737, 0" << COLOR RESET << std::endl << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << COLOR GREEN << "Let's iterate through the stack and print the values : " << COLOR RESET << std::endl << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::cout<<std::endl;
	MutantStack<int>::reverse_iterator rit = mstack.rbegin();
	MutantStack<int>::reverse_iterator rite = mstack.rend();
	
	std::cout << COLOR GREEN << "Let's iterate through the stack with the reverse iterators and print the values : "  << COLOR RESET << std::endl  << std::endl;
	while (rit != rite)
	{
		std::cout << *rit << std::endl;
		rit++;
	}
	//std::stack<int> s(mstack);
	std::cout << std::endl;
	
	
	std::cout << COLOR MAGENTA << "************************************************" << COLOR RESET << std::endl << std::endl;
	std::cout << COLOR MAGENTA << "Let's do exactly the same with a std::list to prove we have the same values : " << COLOR RESET << std::endl << std::endl;

	std::cout <<  COLOR BLUE <<"Let's create a stack an push 5 then 17" <<  COLOR RESET << std::endl << std::endl;
	std::list<int> list_stack;
	list_stack.push_back(5);
	list_stack.push_back(17);
	std::cout <<COLOR YELLOW << "At the top of the stack we have : " << COLOR RESET << list_stack.front() << std::endl << std::endl;
	list_stack.pop_back();
	std::cout << COLOR BLUE << "Let's pop() the stack" <<  COLOR YELLOW << ", the size is now : " << COLOR RESET << list_stack.size() <<  COLOR YELLOW << " and the top is " << COLOR RESET << list_stack.front() << COLOR RESET <<  std::endl <<std::endl;
	std::cout << COLOR BLUE << "Let's push 3, 5, 737, 0" << COLOR RESET <<  std::endl << std::endl;
	list_stack.push_back(3);
	list_stack.push_back(5);
	list_stack.push_back(737);
	//[...]
	list_stack.push_back(0);
	std::list<int>::iterator itl = list_stack.begin();
	std::list<int>::iterator itle = list_stack.end();
	++itl;
	--itl;
	std::cout <<COLOR GREEN <<  "Let's iterate through the stack and print the values : "  << COLOR RESET << std::endl << std::endl;
	while (itl != itle)
	{
		std::cout << *itl << std::endl;
		++itl;
	}
	
	return 0;
}