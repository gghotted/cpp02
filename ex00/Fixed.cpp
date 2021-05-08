#include "Fixed.hpp"

// constructor

Fixed::Fixed(void) {
  std::cout << "Default constructor called\n";
  this->value = 0;
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

// public method

int Fixed::getRawBits(void) const {
  std::cout << "getRawBits member function called\n";
  return this->value;
}

void Fixed::setRawBits(int const raw) {
  std::cout << "setRawBits member function called\n";
  this->value = raw;
}
