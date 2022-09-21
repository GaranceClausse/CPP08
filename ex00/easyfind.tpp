/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 13:13:43 by gclausse          #+#    #+#             */
/*   Updated: 2022/09/21 14:00:00 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
int easyfind(T int_container, int to_find)
{
	vector<int>::iterator it = std::find(int_container.begin(), int_container.end(), to_find);
	if (it != int_container.end())
		return (to_find);
	throw (std::exception);
}