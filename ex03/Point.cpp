/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 07:26:41 by jeberle           #+#    #+#             */
/*   Updated: 2024/10/22 09:03:32 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Point.hpp"
#include <iostream>

Point::Point() : x(0), y(0) {}

Point::Point(const Fixed x, const Fixed y) : x(x), y(y) {}

Point::Point(const Point& src) : x(src.x), y(src.y) {}

Point& Point::operator=(const Point& src) {
	(void)src;
	return *this;
}

Point::~Point() {}

Fixed	Point::getX(void) const {
	return (this->x);
}

Fixed	Point::getY(void) const {
	return (this->y);
}
