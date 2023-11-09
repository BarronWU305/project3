#ifndef SQUARE_H_
#define SQUARE_H_

#include <string>
#include <Rectangle.h>

class Square : public Rectangle {
public:
  Square(double Side);

  virtual double getArea(double Length) const;
  virtual double getPerimeter(double Length) const;
  virtual void print() const;

  virtual void setLength (double Length);
  virtual void setWidth (double Width);

};

#endif // !SQUARE_H_
