#include "Fixed.hpp"

// constructor

Fixed::Fixed(void) {
  std::cout << "Default constructor called\n";
  this->value = 0;
}

Fixed::Fixed(const int value) {
  std::cout << "Int constructor called\n";
  this->value = value << this->numOfFractionalBits;
}

Fixed::Fixed(const float value) {
  std::cout << "Float constructor called\n";
  float temp = (1 << this->numOfFractionalBits) * value;
  this->value = roundf(temp);
}

Fixed::Fixed(const Fixed& src) {
  std::cout << "Copy constructor called\n";
  *this = src;
}

Fixed::~Fixed(void) {
  std::cout << "Destructor called\n";
}

// operator

Fixed& Fixed::operator = (const Fixed& src) {
  std::cout << "Assignation operator called\n";
  this->value = src.getRawBits();
  return *this;
}

std::ostream& operator << (std::ostream& os, const Fixed& fixed) {
  os << fixed.toFloat();
  return os;
}

// public method

int Fixed::getRawBits(void) const {
  // std::cout << "getRawBits member function called\n";
  return this->value;
}

void Fixed::setRawBits(int const raw) {
  // std::cout << "setRawBits member function called\n";
  this->value = raw;
}

float Fixed::toFloat(void) const {
  return ((float)this->value / (1 << this->numOfFractionalBits));
}

int Fixed::toInt(void) const {
  return (this->value >> this->numOfFractionalBits);
}
