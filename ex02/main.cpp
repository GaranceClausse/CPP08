/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 12:19:02 by gclausse          #+#    #+#             */
/*   Updated: 2022/09/22 14:35:35 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	std::cout << "Let's create a stack an push 5 then 17" << std::endl << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "At the top of the stack we have : " << mstack.top() << std::endl << std::endl;
	mstack.pop();
	std::cout << "Let's pop() the stack, the size is now : " << mstack.size() << " and the top is " << mstack.top() << std::endl <<std::endl;
	std::cout << "Let's push 3, 5, 737, 0" << std::endl << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << "Let's iterate through the stack and print the values : " << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	
	
	std::cout << "************************************************" << std::endl << std::endl;
	std::cout << "Let's do exactly the same with a std::list : " << std::endl << std::endl;

	std::cout << "Let's create a stack an push 5 then 17" << std::endl << std::endl;
	std::list<int> list_stack;
	list_stack.push_back(5);
	list_stack.push_back(17);
	std::cout << "At the top of the stack we have : " << list_stack.front() << std::endl << std::endl;
	list_stack.pop_back();
	std::cout << "Let's pop() the stack, the size is now : " << list_stack.size() << " and the top is " << list_stack.front() << std::endl <<std::endl;
	std::cout << "Let's push 3, 5, 737, 0" << std::endl << std::endl;
	list_stack.push_back(3);
	list_stack.push_back(5);
	list_stack.push_back(737);
	//[...]
	list_stack.push_back(0);
	std::list<int>::iterator itl = list_stack.begin();
	std::list<int>::iterator itle = list_stack.end();
	++itl;
	--itl;
	std::cout << "Let's iterate through the stack and print the values : " << std::endl;
	while (itl != itle)
	{
		std::cout << *itl << std::endl;
		++itl;
	}
	return 0;
}