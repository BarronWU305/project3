#include <RightTriangle.h>



void RightTriangle::setBase(double Base){ // defined both get and set height
    base_ = Base;
}
double RightTriangle::getBase(){
    return base_;
}


void RightTriangle::setHeight(double Height){ // defined both get and set height
    height_ = Height;
}
double RightTriangle::getHeight(){
    return height_;
}


double RightTriangle::getArea(){
    return (.5 * (height_ * base_) )
}