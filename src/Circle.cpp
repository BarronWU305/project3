#include<Circle.h>

#define PI 3.141592653589

Circle::Circle(double Radius) 
  : Ellipse(1, 1), radius_(Radius) {
    name_ = "Circle";
  }


double Circle::getArea() const {
   return radius_ * radius_ * PI;
}


double Circle::getPerimeter() const {
   return 2.0 *radius_ * PI;
}

