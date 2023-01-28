/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <areheman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 15:55:53 by areheman          #+#    #+#             */
/*   Updated: 2023/01/27 09:58:04 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <list>
#include <deque>

template <typename T, typename Container=std::deque<T> >
class MutantStack: public std::stack<T , Container>
{	
	public:
		MutantStack():std::stack<T, Container>(){}
		MutantStack<T, Container>(MutantStack<T, Container> const& obj):std::stack<T>::c(obj.c){}
	
		MutantStack<T, Container>& operator=(MutantStack<T, Container> const& obj)
		{
			if (this == &obj)
				return *this;
			std::stack<T>::c = obj.c;
			return *this;
		}

		typedef typename Container::iterator	iterator;
		typedef typename Container::const_iterator	const_iterator;
		iterator begin(){return std::stack<T>::c.begin();}
		iterator end(){return std::stack<T>::c.end();}
		const_iterator begin() const{return std::stack<T>::c.begin();}
		const_iterator end() const{return std::stack<T>::c.end();}
		
};


#endif
