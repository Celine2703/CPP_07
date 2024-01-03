/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartin- <cmartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 17:25:25 by cmartin-          #+#    #+#             */
/*   Updated: 2024/01/03 21:18:35 by cmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void	iter(T *array, size_t length, void (*f)(T&))
{
	for (size_t i = 0; i < length; i++)
		f(array[i]);
}

template <typename T>
void	print(T &a)
{
	std::cout << a << std::endl;
}

#endif