/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 22:55:16 by minsunki          #+#    #+#             */
/*   Updated: 2022/03/31 00:20:04 by minsunki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EASYFIND_TPP__
#define __EASYFIND_TPP__

#include <algorithm>

template<typename T>
typename T::iterator	easyfind(T &c, const int &needle)
{
	return (std::find(c.begin(), c.end(), needle));
}

#endif
