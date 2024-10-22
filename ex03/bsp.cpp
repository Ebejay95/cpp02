/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 07:41:10 by jeberle           #+#    #+#             */
/*   Updated: 2024/10/22 08:59:16 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Point.hpp"

Fixed	calculateArea(Point const a, Point const b, Point const c)
{
	Fixed area = ((a.getX() * (b.getY() - c.getY())) +
					(b.getX() * (c.getY() - a.getY())) +
					(c.getX() * (a.getY() - b.getY()))) / Fixed(2);
	if (area < Fixed(0))
		area = area * Fixed(-1);
	return area;
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	total = calculateArea(a, b, c);

	Fixed	cmpAr_one = calculateArea(point, b, c);
	Fixed	cmpAr_two = calculateArea(a, point, c);
	Fixed	cmpAr_three = calculateArea(a, b, point);

	if (cmpAr_one == Fixed(0) || cmpAr_two == Fixed(0) || cmpAr_three == Fixed(0))
		return false;

	Fixed sum = cmpAr_one + cmpAr_two + cmpAr_three;
	return (sum == total);
}
