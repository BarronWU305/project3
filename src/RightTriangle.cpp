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


double RightTriangle::getArea() const{
    return (.5 * (height_ * base_) ); 
}


double RightTriangle::getPerimeter()const{
    return (height_ + base_ + sqrt(pow(height_) + pow(base_)))
}

void print(){
    
}