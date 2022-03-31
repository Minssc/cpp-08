/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 22:18:33 by minsunki          #+#    #+#             */
/*   Updated: 2022/03/31 23:58:09 by minsunki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <vector>

static void	test_rit()
{
	MutantStack<std::string>	test;
	test.push("hello");
	test.push("world");
	test.push("reverse");
	test.push("these");

	MutantStack<std::string>::reverse_iterator	rit = test.rbegin();
	MutantStack<std::string>::reverse_iterator	rend = test.rend();
	++rit;
	--rit;
	while (rit != rend)
	{
		std::cout << *rit << std::endl;
		++rit;
	}
}

int main()
{
	const std::vector<int> test;
	std::vector<int> ttest;
	test.begin();
	ttest.begin();
	test.rbegin();
	ttest.rbegin();
	const MutantStack<int> mtest;
	MutantStack<int> mttest;

	mttest.begin();
	// mtest.rbegin();
	// mtest.rbegin();

	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	test_rit();
	return 0;
}
