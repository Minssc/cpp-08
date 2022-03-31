/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 22:54:17 by minsunki          #+#    #+#             */
/*   Updated: 2022/03/31 13:09:25 by minsunki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <iostream>
#include <list>

int	main()
{
	std::vector<int>	test; 
	std::list<int> 		ttest;
	for (int i = 0; i < 100; ++i)
	{
		test.push_back(i);
		ttest.push_back(i);
	}
	
	if (easyfind(ttest, 10) != ttest.end())
		std::cout << "found 10 in ttest" << std::endl;
	
	if (easyfind(ttest, 101) != ttest.end())
		std::cout << "found 101 in ttest" << std::endl;

	return (0);
}
