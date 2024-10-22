/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:08:40 by jeberle           #+#    #+#             */
/*   Updated: 2024/10/22 06:46:50 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
	private:
		int					fixpnt_numval;
		static const int	fractnl_bits = 8;
	public:
		Fixed();
		Fixed(const int integer);
		Fixed(const float floating);
		Fixed(const Fixed& src);
		Fixed&	operator=(const Fixed& src);
		~Fixed();

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		int		toInt( void ) const;
		float	toFloat( void ) const;

		Fixed	operator+(const Fixed& other) const;
		Fixed	operator-(const Fixed& other) const;
		Fixed	operator*(const Fixed& other) const;
		Fixed	operator/(const Fixed& other) const;

		Fixed	operator<(const Fixed& other) const;
		Fixed	operator>(const Fixed& other) const;
		Fixed	operator<=(const Fixed& other) const;
		Fixed	operator>=(const Fixed& other) const;
		Fixed	operator==(const Fixed& other) const;
		Fixed	operator!=(const Fixed& other) const;

		Fixed	operator++(int);
		Fixed	&operator++();
		Fixed	operator--(int);
		Fixed	&operator--();
};

std::ostream&	operator<<(std::ostream& os, const Fixed& fixed);

#endif
