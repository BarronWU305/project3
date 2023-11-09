#include<iostream>
#include<cmath>
#include<iomanip>
#include<Rectangle.h>

Rectangle::Rectangle(double Length, double Width) 
   : Shape("Rectangle"), length_(Length), width_(Width) {} 

void Rectangle::setLength(double Length){
    length_= Length;
}
double Rectangle::getLength() const{
    return length_;

}
void Rectangle::setWidth(double Width){
    width_= Width;
}
double Rectangle::getWidth() const{
    return width_;
}

double Rectangle::getArea() const{
    return (width_ * length_);
}

void Rectangle::print() const {}




