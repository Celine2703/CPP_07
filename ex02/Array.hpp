/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartin- <cmartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 18:28:50 by cmartin-          #+#    #+#             */
/*   Updated: 2023/12/16 18:29:16 by cmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array
{
	private:
		T		*_array;
		size_t	_length;

	public:
		Array(void) : _array(NULL), _length(0) {}
		Array(unsigned int n) : _array(new T[n]), _length(n) {}
		Array(Array const &src) : _array(NULL), _length(0) { *this = src; }
		~Array(void) { delete [] _array; }

		Array	&operator=(Array const &src)
		{
			if (this != &src)
			{
				delete [] _array;
				_length = src._length;
				_array = new T[_length];
				for (size_t i = 0; i < _length; i++)
					_array[i] = src._array[i];
			}
			return (*this);
		}

		T		&operator[](size_t i)
		{
			if (i >= _length)
				throw std::exception();
			return (_array[i]);
		}

		size_t	size(void) const { return (_length); }
};