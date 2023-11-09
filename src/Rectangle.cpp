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

double Rectangle::getPerimeter() const{
    return ((2 * length_) + (2 * width_));
}

void Rectangle::print() const {
    cout << "Shape: " << getName() << endl;
    cout << "Length = " << length_ << endl;
    cout << "Width = " << width_ << endl;
    cout << "Area = " << getArea() << endl;
    cout << "Perimeter = " << getPerimeter() << endl;
}




