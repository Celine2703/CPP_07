/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartin- <cmartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 14:18:55 by cmartin-          #+#    #+#             */
/*   Updated: 2024/01/03 21:12:50 by cmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "whatever.hpp"

int main()
{
	int a = 2;
	int b = 3;
	const int const_a = 2;
	const int const_b = 3;

	::swap(const_a, const_b); // error: invalid conversion from ‘const int*’ to ‘int*’ [-fpermissive]
	std::cout << std::endl;
	
	std::cout << "a = " << a << ", b = " << b << std::endl;
	::swap(a, b);
	std::cout << "a et b ont ete echanges" << std::endl;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
	std::cout << "max(a, b) = " << ::max(a, b) << std::endl;

	std::cout << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	std::cout << "c = " << c << ", d = " << d << std::endl;
	::swap(c, d);
	std::cout << "c et d ont ete echanges" << std::endl;
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min(c, d) = " << ::min(c, d) << std::endl;
	std::cout << "max(c, d) = " << ::max(c, d) << std::endl;

	std::cout << std::endl;

	float e = 2.5;
	float f = 3.5;

	std::cout << "e = " << e << ", f = " << f << std::endl;
	::swap(e, f);
	std::cout << "e et f ont ete echanges" << std::endl;
	std::cout << "e = " << e << ", f = " << f << std::endl;
	std::cout << "min(e, f) = " << ::min(e, f) << std::endl;
	std::cout << "max(e, f) = " << ::max(e, f) << std::endl;

	std::cout << std::endl;

	double g = 3.5;
	double h = 3.5;

	std::cout << "g = " << g << ", h = " << h << std::endl;
	::swap(g, h);
	std::cout << "g et h ont ete echanges" << std::endl;
	std::cout << "g = " << g << ", h = " << h << std::endl;
	std::cout << "min(g, h) = " << ::min(g, h) << std::endl;
	std::cout << "max(g, h) = " << ::max(g, h) << std::endl;
}

// en fait chaque fonction appartient a un namespace, std:: ::(:: c'est le namespace global) ou whatever:: 
//  mais dans ce cas il faut definir le namespace whatever dans le fichier whatever.hpp
// dans les fichiers compiles