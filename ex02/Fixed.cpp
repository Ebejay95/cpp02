/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:08:39 by jeberle           #+#    #+#             */
/*   Updated: 2024/10/21 15:12:13 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Fixed.hpp"
#include <iostream>

Fixed::Fixed() : fixpnt_numval(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int integer) {
	std::cout << "Int constructor called" << std::endl;
	this->fixpnt_numval = integer << fractnl_bits;
}

Fixed::Fixed(const float floating) {
	std::cout << "Float constructor called" << std::endl;
	float scaled = floating * (1 << fractnl_bits);
	this->fixpnt_numval = static_cast<int>(scaled + (scaled >= 0 ? 0.5f : -0.5f));
}

Fixed::Fixed(const Fixed& src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed& Fixed::operator=(const Fixed& src) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src)
		fixpnt_numval = src.fixpnt_numval;
	return (*this);
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->fixpnt_numval;
}

void Fixed::setRawBits(int const raw) {
	this->fixpnt_numval = raw;
}

int		Fixed::toInt( void ) const {
	return (this->fixpnt_numval >> fractnl_bits);
}

float	Fixed::toFloat( void ) const {
	return (static_cast<float>(this->fixpnt_numval) / (1 << fractnl_bits));

}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
	os << fixed.toFloat();
	return (os);
}
