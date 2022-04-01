/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 22:19:05 by minsunki          #+#    #+#             */
/*   Updated: 2022/03/31 23:59:29 by minsunki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MUTANTSTACK_HPP__
#define __MUTANTSTACK_HPP__

#include <iostream>
#include <stack>

template <typename T>
class MutantStack: public std::stack<T>
{
	private:

	public:
		typedef typename std::stack<T>::container_type	ct;
		typedef typename ct::iterator iterator;
		typedef typename ct::const_iterator const_iterator;
		typedef typename ct::reverse_iterator reverse_iterator;
		typedef typename ct::const_reverse_iterator const_reverse_iterator;
		// typedef typename contype::iterator it;

		MutantStack();
		MutantStack(const MutantStack &m);
		~MutantStack();

		const MutantStack	&operator =(const MutantStack &m);
		
		iterator	begin();
		const_iterator	begin() const;
		iterator	end();
		const_iterator	end() const;
		const_iterator	cbegin() const;
		const_iterator	cend() const;
		reverse_iterator	rbegin();
		const_reverse_iterator	rbegin() const;
		reverse_iterator	rend();
		const_reverse_iterator	rend() const;
		const_reverse_iterator	crbegin() const;
		const_reverse_iterator	crend() const;
};

#include "MutantStack.tpp"

#endif
