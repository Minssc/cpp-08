/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 13:10:05 by minsunki          #+#    #+#             */
/*   Updated: 2022/03/31 22:16:25 by minsunki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SPAN_HPP__
#define __SPAN_HPP__

#include <iterator>
#include <string>
#include <exception>
#include <stdexcept>
#include <algorithm>

class Span
{
	private:
		int	*_array;
		unsigned int	_size;
		unsigned int	_idx;
		bool	_sorted;

	public:
		Span();
		Span(const unsigned int &i);
		Span(const Span &s);
		~Span();

		const Span	&operator =(const Span &s);
		const int	&operator [](const unsigned int &idx) const;

		int	shortestSpan();
		int	longestSpan();
		void	addNumber(const int &n);

		template <typename Iterator>
		void	addNumber(Iterator first, Iterator last)
		{
			unsigned int size = last - first;

			if (_size < _idx + size)
				throw std::runtime_error(std::string("addNumber iterator range too many elements"));
			while (first != last)
			{
				_array[_idx++] = *first;
				first++;
			}
			_sorted = false;
		}
		// template <typename T>
		// void	addNumber(typename T::iterator begin,
		// 						typename T::iterator end);

		const unsigned int	&getSize() const;
		const unsigned int	&getIdx() const;
		const bool	&getSorted() const;
};

// template <typename T>
// void	Span::addNumber(typename T::iterator begin, typename T::iterator end)
// {
// 	unsigned int	size = end - begin;

// 	if (_size <= _idx + size)
// 		throw std::runtime_error(std::string("addNumber iterator range too many elements"));
// 	while (begin != end)
// 	{
// 		_array[_idx++] = *begin;
// 		begin++;
// 	}
// 	_sorted = false;
// }

#endif