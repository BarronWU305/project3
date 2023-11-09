#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include <Shape.h>

class Rectangle : public Shape {
public:
  Rectangle(double Length, double Width);

  virtual void setLength (double Length);
  double getLength() const;
  
  virtual void setWidth (double Width);
  double getWidth() const;

  virtual double getArea() const;
  virtual double getPerimeter () const;
  virtual void print() const;

protected:
  double length_;
  double width_;


};
#endif
