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

}

//get area
double Ellipse::getArea() const {

}

//print Ellipse
void Ellipse::print() const {

}