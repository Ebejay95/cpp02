/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 11:56:37 by jeberle           #+#    #+#             */
/*   Updated: 2024/10/21 12:21:55 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed {
	private:
		int					fixpnt_numval;
		static const int	fractnl_bits = 8;
	public:
		Fixed();
		Fixed(const Fixed& src);
		Fixed& operator=(const Fixed& src);
		~Fixed();
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
};

#endif
