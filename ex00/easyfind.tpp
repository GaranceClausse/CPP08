/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 13:13:43 by gclausse          #+#    #+#             */
/*   Updated: 2022/09/21 15:43:22 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
int easyfind(T int_container, int to_find)
{
	typename T::iterator it = std::find(int_container.begin(), int_container.end(), to_find);
	if (it != int_container.end())
		return (to_find);
	throw (std::exception());
	return (0);
}


template <typename T>
int index(T int_container, int to_find)
{
	int index = 0;
	typename T::iterator it = std::find(int_container.begin(), int_container.end(), to_find);
	if (it != int_container.end())
	{
		while(it != int_container.begin())
		{
			it--;
			index++;
		}
		return (index);
	}
	throw (std::exception());
	return (0);
}