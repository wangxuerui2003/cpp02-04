/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wxuerui <wangxuerui2003@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 16:32:01 by wxuerui           #+#    #+#             */
/*   Updated: 2023/05/17 14:14:12 by wxuerui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point) {
	Fixed	w1, w2, ax, bx, cx, px, ay, by, cy, py;

	ax = a.getX();
	bx = b.getX();
	cx = c.getX();
	px = point.getX();
	ay = a.getY();
	by = b.getY();
	cy = c.getY();
	py = point.getY();

	// https://www.youtube.com/watch?v=HYAgJN3x4GA
	w1 = ((ax * (cy - ay)) + ((py - ay) * (cx - ax)) - (px * (cy - ay))) / (((by - ay) * (cx - ax)) - ((bx - ax) * (cy - ay)));
	w2 = (py - ay - w1 * (by - ay)) / (cy - ay);
	// std::cout << w1 << std::endl << w2 << std::endl;

	return !(w1 < 0 || w2 < 0 || (w1 + w2 > 1));
}