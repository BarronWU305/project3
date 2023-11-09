#include <RightTriangle.h>
#include <cmath>


RightTriangle::RightTriangle(double Base, double Height) 
  : Shape("RightTriangle"), base_(Base), height_(Height) {}


void RightTriangle::setBase(double Base){ // defined both get and set height
    base_ = Base;
}
double RightTriangle::getBase() const{
    return base_;
}


void RightTriangle::setHeight(double Height){ // defined both get and set height
    height_ = Height;
}
double RightTriangle::getHeight() const{
    return height_;
}


double RightTriangle::getArea() const{ //defined get area
    return (.5 * (height_ * base_) ); 
}


double RightTriangle::getPerimeter() const{ //defined get perimeter
    return (height_ + base_ + sqrt(pow(height_) + pow(base_)))
}


void RightTriangle::print() const{
    cout << "Shape: " << getName() << endl; // printing shape
    cout << "Base = " << base_ << endl; // printing base
    cout << "Height = " << height_ << endl; // printing height
    cout << "Area = " << getArea() << endl; // printing area
    cout << "Perimeter = " << getPerimeter() << endl; // printing perimeter
}