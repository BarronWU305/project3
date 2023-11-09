#ifndef RECTANGLE_
#define RECTANGLE_

#include <Shape.h>

class Rectangle : public Shape {
public:
  Rectangle(double Length, double Width);

  void setLength (double Length);
  double getLength() const;
  
  void setWidth (double Width);
  double getWidth() const;

  virtual double getArea() const;
  virtual double getPerimeter () const; //get the perimeter on thursday 
  virtual void print() const;

protected:
  double length_;
  double width_;


};
#endif
