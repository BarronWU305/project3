#include<Ellipse.h>

#define PI 3.141592653589


double Circle::getArea() const {
   return radius_ * radius_ * PI;
}


double Circle::getPerimeter() const {
   return 2.0 *radius_ * PI;
}

