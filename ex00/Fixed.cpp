/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 11:56:45 by jeberle           #+#    #+#             */
/*   Updated: 2024/10/21 12:27:08 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Fixed.hpp"
#include <iostream>

Fixed::Fixed() : fixpnt_numval(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed& Fixed::operator=(const Fixed& src) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src)
		this->fixpnt_numval = src.getRawBits();
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
	std::cout << "setRawBits member function called" << std::endl;
	this->fixpnt_numval = raw;
}
