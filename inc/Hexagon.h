#ifndef HEXAGON_H_
#define HEXAGON_H_

#include<Shape.h> //include the header file


using namespace std;


//Hexagon class inherits from the Shape class
class Hexagon : public Shape {
public:
  // Constructor that takes the length of the hexagon as a parameter
  Hexagon(double Length);

// Accessor Functions
  double getLength() const;
  virtual double getArea() const;
  virtual double getPerimeter() const;
  virtual void print() const;

protected:
  double length_; // Length of the hexagon
};

#endif
