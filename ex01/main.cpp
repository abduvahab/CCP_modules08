/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <areheman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 13:06:50 by areheman          #+#    #+#             */
/*   Updated: 2023/01/27 09:46:14 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.h"

int main(void)
{
	try{
		
	std::vector<int> v;
/*
	v.push_back(6);
	v.push_back(3);
	v.push_back(17);
	v.push_back(9);
	v.push_back(11);

*/

	Span s(5);

	s.addNumber(6);
	s.addNumber(3);
	s.addNumber(17);
	s.addNumber(9);
	s.addNumber(11);

//	Span tem(s);
//	s.fillNumber();
//	s.fillNumber(v.begin(), v.end());

	s.my_print();
//	tem.my_print();

	std::cout<<s.shortestSpan()<<std::endl;
	std::cout<<s.longestSpan()<<std::endl;

//	s.addNumber(11);
	}catch(std::exception& e)
	{
		std::cout<<e.what()<<std::endl;
	}

	return 0;
}
