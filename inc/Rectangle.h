#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include <Shape.h>

class Rectangle : public Shape {
public:
  Rectangle(double Length, double Width); // function to get width and length of rectangle

  virtual void setLength (double Length); // function to set length
  double getLength() const;               // gets the length and makes it a constant
  
  virtual void setWidth (double Width);   // function to set width
  double getWidth() const;                // gets the width and makes it a constant

  virtual double getArea() const;         //function to get the area of rectangle
  virtual double getPerimeter () const;   //function to get the perimeter of rectangle
  virtual void print() const;             //function to print out area, perimeter, and the name of the shape

protected:
  double length_;     // variable for length
  double width_;      // variable for width


};
#endif
