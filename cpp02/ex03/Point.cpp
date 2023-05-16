/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wxuerui <wangxuerui2003@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 16:33:21 by wxuerui           #+#    #+#             */
/*   Updated: 2023/05/16 16:56:19 by wxuerui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0) {
	return;
}

Point::Point(const float x, const float y) : _x(x), _y(y) {
	return;
}

Point::Point(const Point& copy) : _x(copy.getX()), _y(copy.getY()) {
	return;
}

Point& Point::operator=(const Point& copy) {
	*this = Point(copy);
	return *this;
}

Point::~Point() {
	return;
}

const Fixed& Point::getX(void) const {
	return this->_x;
}

const Fixed& Point::getY(void) const {
	return this->_y;
}
