#ifndef HEXAGON_H_
#define HEXAGON_H_

#include<Shape.h>

using namespace std;

class Hexagon : public Shape {
public:
  Hexagon(double Length);

  void getLength() const;
  virtual double getArea() const;
  virtual double getPerimeter() const;
  virtual void print() const;

protected:
  double length_;
};

#endif