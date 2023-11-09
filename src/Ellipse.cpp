#include <Ellipse.h>
#include <iostream>
#include <cmath>

using namespace std;

Ellipse::Ellipse(double AxisFirst, double AxisSecond)
    : Shape("Ellipse"), axis_first_(AxisFirst), axis_second_(AxisSecond) {}

// get axis A
double Ellipse::getFirstAxis() const
{
  return axis_first_;
}

// get axis B
double Ellipse::getSecondAxis() const
{
  return axis_second_;
}

<<<<<<< HEAD
//get perimeter
double Ellipse::getPerimeter() const {
  double h = ((axis_first_ - axis_second_) * (axis_first_ -axis_second_ )) / ((axis_first_ + axis_second_) * (axis_first_ + axis_second_));
  double perimeter = M_PI * (axis_first_ + axis_second_) * (1 + (3 * h) / (10 + sqrt(4 - 3 * h)));
  return perimeter;
}

//get area
double Ellipse::getArea() const {
  return M_PI * axis_first_ * axis_second_;
=======
// get perimeter
double Ellipse::getPerimeter() const
{
  double h = ((AxisFirst - AxisSecond) * (AxisFirst - AxisSecond)) / ((AxisFirst + AxisSecond) * (AxisFirst + AxisSecond));
  double perimeter = M_PI * (AxisFirst + AxisSecond) * (1 + (3 * h) / (10 + std::sqrt(4 - 3 * h)));
  return perimeter;
}

// get area
double Ellipse::getArea() const
{
  return area = M_PI * AxisFirst * AxisSecond;
>>>>>>> b80fc22367cba803189235202b2ff1e8bf8f976a
}

// print Ellipse
void Ellipse::print() const
{
  cout << "Shape: " << getName() << endl;
  cout << "First Axis = " << getFirstAxis() << endl;
  cout << "Second Axis = " << getSecondAxis() << endl;
  cout << "Area = " << getArea() << endl;
  cout << "Perimeter = " << getPerimeter() << endl;
}
