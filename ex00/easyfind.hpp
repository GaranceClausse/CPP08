/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 11:44:55 by gclausse          #+#    #+#             */
/*   Updated: 2022/09/21 14:42:39 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <stdlib.h>
#include <vector>
# include <list>
#include <algorithm> 


template <typename T>
int easyfind(T int_container, int to_find);

template <typename T>
int index(T int_container, int to_find);

#include "easyfind.tpp"