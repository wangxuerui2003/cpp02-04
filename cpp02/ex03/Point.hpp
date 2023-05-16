/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wxuerui <wangxuerui2003@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 16:27:54 by wxuerui           #+#    #+#             */
/*   Updated: 2023/05/16 16:55:57 by wxuerui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include <cmath>
# include "Fixed.hpp"

class Point {
	public:
		Point();
		Point(const float x, const float y);
		Point(const Point& copy);
		Point& operator=(const Point& copy);
		~Point();
		const Fixed& getX(void) const;
		const Fixed& getY(void) const;

	private:
		Fixed const	_x;
		Fixed const	_y;

};

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif