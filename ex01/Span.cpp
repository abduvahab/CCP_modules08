/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 16:51:19 by areheman          #+#    #+#             */
/*   Updated: 2023/01/26 16:52:21 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.h"

Span::Span():n(0)
{
	std::cout<<"default construction"<<std::endl;
}
Span::Span(unsigned int n):n(n)
{
	std::cout<<"construction with arguments"<<std::endl;
}
Span::Span(const Span& obj):vec(obj.vec), n(obj.n)
{
	std::cout<<"copy construction"<<std::endl;

}
Span& Span::operator=(const Span& obj)
{
	std::cout<<"copy asignment construction"<<std::endl;
	if (this == &obj)
		return *this ;
	n = obj.n;
	vec = obj.vec;
	return *this;
}

Span::~Span()
{
	std::cout<<"destruction"<<std::endl;
}

void	Span::addNumber(int i)
{
	if (vec.size() == n)
		throw OutOfBound();
	vec.push_back(i);
}

int	Span::longestSpan()
{
	if (vec.size() == 0 || vec.size() == 1)
		throw NoSpan();
	std::pair<std::vector<int>::iterator,std::vector<int>::iterator> pr;
	pr = std::minmax_element(vec.begin(), vec.end());
	return (*pr.second - *pr.first);
}

int Span::shortestSpan()
{
	if (vec.size() == 0 || vec.size() == 1)
		throw NoSpan();
	std::vector<int> _new(vec);
	std::sort(_new.begin(), _new.end());
	int min = *(_new.begin() + 1)- *(_new.begin()) ;
	for (std::vector<int>::iterator it= _new.begin(); it != _new.end() - 1; it++)
	{
		if ( min > (*(it + 1) - *it))
			min = *(it+1) - *it;
	}
	return min;
}

void	Span::fillNumber()
{
	unsigned int d = vec.size();
	if ( d >= n)
		throw OutOfBound();
	int N = this->n / 10 * 10;
	if (this->n < 10)
		N = 10;
	while (d != n)
	{
		vec.push_back(std::rand() % N);
		d++;
	}
}

void	Span::fillNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end) throw(OutOfBound)
{
	for(; begin != end; begin++)
		addNumber(*begin);
}
void Span::my_print()
{
	for(std::vector<int>::iterator begin = vec.begin(); begin != vec.end(); begin++)
	{
		std::cout<<*begin<<" ";
	}
	std::cout<<std::endl;
}




