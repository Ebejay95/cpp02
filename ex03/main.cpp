/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 07:25:35 by jeberle           #+#    #+#             */
/*   Updated: 2024/10/22 09:06:01 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Fixed.hpp"
#include "./Point.hpp"

int main( void )
{
	// triangle
	Point	a(Fixed(0), Fixed(0));
	Point	b(Fixed(4), Fixed(0));
	Point	c(Fixed(2), Fixed(3));

	// test points
	float test = 3.5;
	Point	one(Fixed(test), Fixed(1));
	Point	two(Fixed(5), Fixed(5));
	Point	three(Fixed(2), Fixed(1));

	std::cout << std::endl;
	std::cout << "Triangle is" << std::endl;
	std::cout << "a(" << a.getX() << ", " << a.getY() << ")" << std::endl;
	std::cout << "b(" << b.getX() << ", " << b.getY() << ")" << std::endl;
	std::cout << "c(" << c.getX() << ", " << c.getY() << ")" << std::endl;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << "Point" << std::endl;
	std::cout << "one(" << one.getX() << ", " << one.getY() << ")" << std::endl;
	std::cout << "two(" << two.getX() << ", " << two.getY() << ")" << std::endl;
	std::cout << "three(" << three.getX() << ", " << three.getY() << ")" << std::endl;

	std::cout << std::endl;
	std::cout << "Point one is " << (bsp(a, b, c, one) ? "inside" : "outside") << std::endl;
	std::cout << "Point two is " << (bsp(a, b, c, two) ? "inside" : "outside") << std::endl;
	std::cout << "Point three is " << (bsp(a, b, c, three) ? "inside" : "outside") << std::endl;
	std::cout << std::endl;

	return (0);
}
