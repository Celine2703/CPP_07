/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartin- <cmartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 17:28:11 by cmartin-          #+#    #+#             */
/*   Updated: 2024/01/03 21:17:58 by cmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

int main()
{
	int		int_array[5] = {1, 2, 3, 4, 5};
	float	float_array[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
	char	char_array[5] = {'a', 'b', 'c', 'd', 'e'};
	const int const_int_array[5] = {1, 2, 3, 4, 5};

	iter(int_array, 5, print);
	std::cout << std::endl;
	iter(float_array, 5, print);
	std::cout << std::endl;
	iter(char_array, 5, print);
	std::cout << std::endl;
	iter(const_int_array, 5, print);
}