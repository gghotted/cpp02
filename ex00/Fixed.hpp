#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
 public:
  Fixed(void);
  Fixed(const Fixed& src);
  ~Fixed(void);

  Fixed& operator = (const Fixed& operand);

  int getRawBits(void) const;
  void setRawBits(int const raw);

 private:
  int value;
  static const int numOfFractionalBits = 8;
};

#endif
