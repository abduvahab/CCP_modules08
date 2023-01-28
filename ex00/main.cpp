/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 15:28:21 by areheman          #+#    #+#             */
/*   Updated: 2023/01/23 15:45:07 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>
#include <deque>

int main(void)
{
	{
			
		try{
			std::cout<<"test vector"<<std::endl;
			std::vector<int> v;
			v.push_back(10);
			v.push_back(20);
			v.push_back(30);
			v.push_back(40);
			easyfind(v, 30);
			easyfind(v, 50);
		}catch(std::exception& e){
			std::cout<<e.what()<<std::endl;
		}	
	}

	{
			
		try{
			std::cout<<"test list"<<std::endl;
			std::list<int> v;
			v.push_back(10);
			v.push_back(20);
			v.push_back(30);
			v.push_back(40);
			easyfind(v, 30);
			easyfind(v, 50);
		}catch(std::exception& e){
			std::cout<<e.what()<<std::endl;
		}	
	}
	return 0;
}
