/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 13:13:27 by minsunki          #+#    #+#             */
/*   Updated: 2022/04/01 13:15:22 by minsunki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(): _array(0), _size(0), _idx(0), _sorted(true) {}

Span::Span(const unsigned int &i): _array(0), _size(i), _idx(0), _sorted(true)
{
	_array = new int[i];
}

Span::Span(const Span &s): _array(0), _size(0), _idx(0), _sorted(true)
{
	*this = s;
}

Span::~Span() 
{
	delete[] _array;
}

const Span	&Span::operator =(const Span &s)
{
	_size = s.getSize();
	_idx = s.getIdx();
	_sorted = s.getSorted();
	int	*tp = new int[_size];
	delete[] _array;
	_array = tp;

	for (unsigned int i = 0; i < _idx; ++i)
		_array[i] = s[i];
	return (*this);
}

const int	&Span::operator [](const unsigned int &idx) const
{
	if (_idx <= idx)
		throw std::runtime_error(std::string("Index out of range"));
	return (_array[idx]);
}

int	Span::shortestSpan()
{
	if (_idx < 1)
		throw std::runtime_error(std::string("shortestSpan not enough elements"));
	if (not _sorted)
	{
		std::sort(_array, _array + _idx);
		_sorted = true;
	}
	int	ret = _array[1] - _array[0];

	for (unsigned int i = 2; i < _idx; ++i)
		if (_array[i] - _array[i - 1] < ret)
			ret = _array[i] - _array[i - 1];
	return (ret);
}

int	Span::longestSpan()
{
	if (_idx < 1)
		throw std::runtime_error(std::string("longestSpan not enough elements"));
	if (not _sorted)
	{
		std::sort(_array, _array + _idx);
		_sorted = true;
	}
	return (_array[_idx - 1] - _array[0]);
}

void	Span::addNumber(const int &n)
{
	if (_size <= _idx)
		throw std::runtime_error(std::string("addNumber full container"));
	_array[_idx++] = n;
	_sorted = false;
}

const unsigned int	&Span::getSize() const
{
	return (_size);
}

const unsigned int	&Span::getIdx() const
{
	return (_idx);
}

const bool	&Span::getSorted() const
{
	return (_sorted);
}