#include <Ellipse.h>
#include <iostream>
#include <cmath>

using namespace std;

Ellipse::Ellipse(double AxisFirst, double AxisSecond) 
  : Shape("Ellipse"), axis_first_(AxisFirst), axis_second_(AxisSecond) {}

//get axis A
double Ellipse::getFirstAxis() const {
    return axis_first_;
}

//get axis B
double Ellipse::getSecondAxis() const {
    return axis_second_;
}

//get perimeter
double Ellipse::getPerimeter() const {
  double h = ((AxisFirst - AxisSecond) * (AxisFirst -AxisSecond )) / ((AxisFirst + AxisSecond) * (AxisFirst + AxisSecond));
  double perimeter = M_PI * (AxisFirst + AxisSecond) * (1 + (3 * h) / (10 + std::sqrt(4 - 3 * h)));
  return perimeter;
}

//get area
double Ellipse::getArea() const {
  double area = M_PI * AxisFirst * AxisSecond;
  return area;
}


//print Ellipse
void Ellipse::print() const {

}

