/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 19:55:29 by minsunki          #+#    #+#             */
/*   Updated: 2022/04/01 15:28:40 by minsunki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <cstdlib>
#include <ctime>
#include <exception>
#include <iostream>
#include <vector>

int main()
{
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	
	Span spe;
	Span sp(10000);
	Span spt(100);
	Span spp(10000);

	std::srand(std::time(NULL));

	for (int i = 0; i < 10000 ; ++i)
		sp.addNumber((rand() % 1000000000) - 2000000000);

	std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
	std::cout << "longest span: " << sp.longestSpan() << std::endl;
	std::cout << std::endl;
	
	for (int i = 0; i < 9999; ++i)
		spp.addNumber(0);
	spp.addNumber(42);

	std::cout << "shortest span: " << spp.shortestSpan() << std::endl;
	std::cout << "longest span: " << spp.longestSpan() << std::endl;
	std::cout << std::endl;

	for (int i = 0; i < 100; ++i)
		spt.addNumber(i * 10 - 2000);
	
	std::cout << "shortest span: " << spt.shortestSpan() << std::endl;
	std::cout << "longest span: " << spt.longestSpan() << std::endl;
	std::cout << std::endl;

	try
	{
		spt.addNumber(42);
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		spe.shortestSpan();
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		spe.longestSpan();
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::vector<int> tv;
	Span ittest(50);

	for(int i = 0; i < 50; ++i)
		tv.push_back(i);

	ittest.addNumber(tv.begin(), tv.end());

	for(int i = 0; i < 50; ++i)
	{
		std::cout << ittest[i] << ", ";
	}
	std::cout << std::endl;

	try
	{
		ittest.addNumber(42);
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		ittest.addNumber(tv.begin(), tv.end());
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	return (0);
}
