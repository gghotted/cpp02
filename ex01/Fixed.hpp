#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
 public:
  Fixed(void);
  Fixed(const int value);
  Fixed(const float value);
  Fixed(const Fixed& src);
  ~Fixed(void);

  Fixed& operator = (const Fixed& operand);

  int getRawBits(void) const;
  void setRawBits(int const raw);
  float toFloat(void) const;
  int toInt(void) const;

 private:
  int value;
  static const int numOfFractionalBits = 8;
};

std::ostream& operator << (std::ostream& os, const Fixed& fixed);

#endif
