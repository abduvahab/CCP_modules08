/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 15:06:55 by areheman          #+#    #+#             */
/*   Updated: 2023/01/23 15:46:53 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <string>
#include <algorithm>

class NotFindException:public std::exception{
	const char* what() const throw(){ return "the number was not fond ";}
};

template <class T>
void	easyfind(T t, int const n)
{
	typename T::iterator it = std::find(t.begin(), t.end(), n);
	if (it == t.end())
		throw NotFindException();
	std::cout<<"the number "<<n<<" was fond"<<std::endl;
}


#endif
