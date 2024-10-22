/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 07:26:52 by jeberle           #+#    #+#             */
/*   Updated: 2024/10/22 08:05:36 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "./Fixed.hpp"
#include <iostream>

class Point {
	private:
		Fixed const	x;
		Fixed const	y;
	public:
		Point();
		Point(const Fixed x, const Fixed y);
		Point(const Point& src);
		Point&	operator=(const Point& src);
		~Point();

		Fixed	getX(void) const;
		Fixed	getY(void) const;
};

Fixed	calculateArea(Point const a, Point const b, Point const c);
bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif
