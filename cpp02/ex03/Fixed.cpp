/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wxuerui <wangxuerui2003@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 13:26:28 by wxuerui           #+#    #+#             */
/*   Updated: 2023/05/16 18:57:39 by wxuerui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0) {
	return;
}

Fixed::Fixed(const int i) {
	this->_value = i * 256;
	return;
}

Fixed::Fixed(const float fp) {
	this->_value = roundf(fp * 256); // Round to the nearest int value to improve accuracy
	return;
}

Fixed::Fixed(const Fixed& copy) {
	this->_value = copy.getRawBits();
}

Fixed& Fixed::operator=(const Fixed& copy) {
	this->_value = copy.getRawBits();
	return *this;
}

Fixed::~Fixed() {
	return;
}

int	Fixed::getRawBits(void) const {
	return this->_value;
}

void	Fixed::setRawBits(int const raw) {
	this->_value = raw;
}

float Fixed::toFloat(void) const {
	return this->_value / 256.0f;
}

int Fixed::toInt(void) const {
	return this->_value / 256;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
	os << fixed.toFloat();
	return os;
}

bool Fixed::operator>(const Fixed& other) const {
	return this->getRawBits() > other.getRawBits();
}

bool Fixed::operator<(const Fixed& other) const {
	return this->getRawBits() < other.getRawBits();
}

bool Fixed::operator>=(const Fixed& other) const {
	return this->getRawBits() >= other.getRawBits();
}

bool Fixed::operator<=(const Fixed& other) const {
	return this->getRawBits() <= other.getRawBits();
}

bool Fixed::operator==(const Fixed& other) const {
	return this->getRawBits() == other.getRawBits();
}

bool Fixed::operator!=(const Fixed& other) const {
	return this->getRawBits() != other.getRawBits();
}

Fixed	Fixed::operator+(const Fixed& other) const {
	return Fixed(this->toFloat() + other.toFloat());
}

Fixed	Fixed::operator-(const Fixed& other) const {
	return Fixed(this->toFloat() - other.toFloat());
}

Fixed	Fixed::operator*(const Fixed& other) const {
	return Fixed(this->toFloat() * other.toFloat());
}

Fixed	Fixed::operator/(const Fixed& other) const {
	return Fixed(this->toFloat() / other.toFloat());
}

Fixed&	Fixed::operator++(void) {
	++(this->_value);
	return *this;
}

Fixed	Fixed::operator++(int) {
	Fixed	temp(*this);
	++(*this);
	return temp;
}

Fixed&	Fixed::operator--(void) {
	--(this->_value);
	return *this;
}

Fixed	Fixed::operator--(int) {
	Fixed	temp(*this);
	--(*this);
	return temp;
}

Fixed&	Fixed::min(Fixed& f1, Fixed& f2) {
	if (f1 < f2) {
		return f1;
	}
	return f2;
}

Fixed&	Fixed::min(const Fixed& f1, const Fixed& f2) {
	if (f1 < f2) {
		return (Fixed&)f1;
	}
	return (Fixed&)f2;
}

Fixed&	Fixed::max(Fixed& f1, Fixed& f2) {
	if (f1 > f2) {
		return f1;
	}
	return f2;
}

Fixed&	Fixed::max(const Fixed& f1, const Fixed& f2) {
	if (f1 > f2) {
		return (Fixed&)f1;
	}
	return (Fixed&)f2;
}