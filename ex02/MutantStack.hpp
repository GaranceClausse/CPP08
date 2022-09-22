/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 12:19:07 by gclausse          #+#    #+#             */
/*   Updated: 2022/09/22 14:19:44 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <stdlib.h>
#include <vector>
# include <list>
#include <algorithm> 
#include <stack>


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

template <typename T>
class MutantStack : public std::stack<T>
{
	private:
		/* data */
	public:
		MutantStack() {};
		virtual ~MutantStack() {};
		
		typedef T stored_e_type;
		typedef typename std::stack<stored_e_type>::container_type container_type;

		typedef typename container_type::iterator               iterator;
        typedef typename container_type::const_iterator         const_iterator;
        typedef typename container_type::reverse_iterator       reverse_iterator;
        typedef typename container_type::const_reverse_iterator const_reverse_iterator;

		iterator                begin() { return (this->c.begin());}
        iterator                end() { return (this->c.end());}
        const_iterator          begin() const { return (this->c.begin());}
        const_iterator          end() const { return (this->c.end());}
        reverse_iterator        rbegin() { return (this->c.rbegin());}
        reverse_iterator        rend() { return (this->c.rend());}
        const_reverse_iterator  rbegin() const { return (this->c.rbegin());}
        const_reverse_iterator  rend() const { return (this->c.rend());}

		 
};










#include "MutantStack.tpp"
