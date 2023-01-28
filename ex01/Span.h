/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 16:24:11 by areheman          #+#    #+#             */
/*   Updated: 2023/01/25 12:45:21 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
#define SPAN_H
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class Span
{
	private:
		std::vector<int>	vec;
		unsigned int			n;
		Span();
	public:
		Span(unsigned int n);
		Span(const Span& obj);
		Span& operator=(const Span& obj);
		~Span();
		
		void	addNumber(int i);
		int		shortestSpan();
		int		longestSpan();
		void	fillNumber();
		void	fillNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end) throw(OutOfBound);
		void	my_print();

	class OutOfBound:public std::exception
	{
		const char* what() const throw(){return "out of bound!";}
	};
	
	class NoSpan:public std::exception
	{
		const char* what() const throw(){return "No Span can be fond!";}
	};
};



#endif
