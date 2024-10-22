/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 07:25:00 by jeberle           #+#    #+#             */
/*   Updated: 2024/10/22 07:25:11 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Fixed.hpp"
#include <iostream>

Fixed::Fixed() : fixpnt_numval(0) {}

Fixed::Fixed(const int integer) {
	this->fixpnt_numval = integer << fractnl_bits;
}

Fixed::Fixed(const float floating) {
	float scaled = floating * (1 << fractnl_bits);
	this->fixpnt_numval = static_cast<int>(scaled + (scaled >= 0 ? 0.5f : -0.5f));
}

Fixed::Fixed(const Fixed& src) {
	*this = src;
}

Fixed& Fixed::operator=(const Fixed& src) {
	if (this != &src)
		fixpnt_numval = src.fixpnt_numval;
	return (*this);
}

Fixed::~Fixed() {}

int Fixed::getRawBits(void) const {
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

Fixed	Fixed::operator+(const Fixed& other) const {
	Fixed	sum;

	sum.setRawBits((this->getRawBits() + other.getRawBits()));
	return (sum);
}

Fixed	Fixed::operator-(const Fixed& other) const {
	Fixed	difference;

	difference.setRawBits((this->getRawBits() - other.getRawBits()));
	return (difference);
}

Fixed	Fixed::operator*(const Fixed& other) const {
	Fixed	product;

	product.setRawBits((this->getRawBits() * other.getRawBits() >> Fixed::fractnl_bits));
	return (product);
}

Fixed	Fixed::operator/(const Fixed& other) const {
	Fixed	quotient;

	quotient.setRawBits((this->getRawBits() >> Fixed::fractnl_bits / other.getRawBits()));
	return (quotient);
}

bool	Fixed::operator<(const Fixed& other) const {
	return (this->getRawBits() < other.getRawBits());
}

bool	Fixed::operator>(const Fixed& other) const {
	return (this->getRawBits() > other.getRawBits());
}

bool	Fixed::operator<=(const Fixed& other) const {
	return (this->getRawBits() <= other.getRawBits());
}

bool	Fixed::operator>=(const Fixed& other) const {
	return (this->getRawBits() >= other.getRawBits());
}

bool	Fixed::operator==(const Fixed& other) const {
	return (this->getRawBits() == other.getRawBits());
}

bool	Fixed::operator!=(const Fixed& other) const {
	return (this->getRawBits() != other.getRawBits());
}

Fixed	Fixed::operator++(int) {
	Fixed	buf;
	buf = *this;
	this->fixpnt_numval++;
	return (buf);
}

Fixed&	Fixed::operator++() {
	this->fixpnt_numval++;
	return (*this);
}

Fixed	Fixed::operator--(int) {
	Fixed	buf;
	buf = *this;
	this->fixpnt_numval--;
	return (buf);
}

Fixed&	Fixed::operator--() {
	this->fixpnt_numval--;
	return (*this);
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	return ((a < b) ? a : b);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	return ((a < b) ? a : b);
}
const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	return ((a > b) ? a : b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	return ((a > b) ? a : b);
}
