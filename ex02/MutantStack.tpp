/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 22:19:22 by minsunki          #+#    #+#             */
/*   Updated: 2022/03/31 23:49:20 by minsunki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MUTANTSTACK_TPP__
#define __MUTANTSTACK_TPP__

#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack() {}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack &m)
{
	*this = m;
}

template <typename T>
MutantStack<T>::~MutantStack() {}

template <typename T>
const MutantStack<T>	&MutantStack<T>::operator =(const MutantStack<T> &m)
{
	std::stack<T>::operator=(m);
	return (*this);
}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin()
{
	return (this->c.begin());
}

template <typename T>
typename MutantStack<T>::const_iterator	MutantStack<T>::begin() const
{
	return (this->c.begin());
}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::end()
{
	return (this->c.end());
}

template <typename T>
typename MutantStack<T>::const_iterator	MutantStack<T>::end() const
{
	return (this->c.end());
}

template <typename T>
typename MutantStack<T>::const_iterator	MutantStack<T>::cbegin() const
{
	return (this->c.begin());
}

template <typename T>
typename MutantStack<T>::const_iterator	MutantStack<T>::cend() const
{
	return (this->c.end());
}

template <typename T>
typename MutantStack<T>::reverse_iterator	MutantStack<T>::rbegin()
{
	return (this->c.rbegin());
}

template <typename T>
typename MutantStack<T>::const_reverse_iterator	MutantStack<T>::rbegin() const
{
	return (this->c.rbegin());
}

template <typename T>
typename MutantStack<T>::reverse_iterator	MutantStack<T>::rend()
{
	return (this->c.rend());
}

template <typename T>
typename MutantStack<T>::const_reverse_iterator	MutantStack<T>::rend() const
{
	return (this->c.rend());
}

template <typename T>
typename MutantStack<T>::const_reverse_iterator	MutantStack<T>::crbegin() const
{
	return (this->c.rbegin());
}

template <typename T>
typename MutantStack<T>::const_reverse_iterator	MutantStack<T>::crend() const
{
	return (this->c.rend());
}

#endif