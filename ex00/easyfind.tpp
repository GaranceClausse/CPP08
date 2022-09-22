/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 13:13:43 by gclausse          #+#    #+#             */
/*   Updated: 2022/09/22 15:29:31 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
int easyfind(T int_container, int to_find)
{
	typename T::iterator it = std::find(int_container.begin(), int_container.end(), to_find);
	if (it != int_container.end())
		return (to_find);
	throw (NotInCont());
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
	throw (NotInCont());
	return (0);
}

const char * NotInCont::what()  const throw() {
				return (char *)"The number your searching for does not appear in that container!";
			}