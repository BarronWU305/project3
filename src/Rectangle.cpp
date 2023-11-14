#include<iostream>
#include<cmath>
#include<iomanip>
#include<Rectangle.h>

Rectangle::Rectangle(double Length, double Width)      // defined constructor method for shape name
   : Shape("Rectangle"), length_(Length), width_(Width) {
  // No-op
} 

void Rectangle::setLength(double Length){             // function to set length
    length_= Length;
}
double Rectangle::getLength() const{                 //function to set length const
    return length_;

}
void Rectangle::setWidth(double Width){             // function to set width
    width_= Width;
}
double Rectangle::getWidth() const{                // function to set width to constant
    return width_;
}

double Rectangle::getArea() const{                // function to get area
    return (width_ * length_);
}

double Rectangle::getPerimeter() const{          // function to get perimeter
    return ((2 * length_) + (2 * width_));
}

void Rectangle::print() const {                 // function to print shape name, perimeter, area, length, and width
    cout << "Shape: " << getName() << endl;
    cout << "Length = " << length_ << endl;
    cout << "Width = " << width_ << endl;
    cout << "Area = " << getArea() << endl;
    cout << "Perimeter = " << getPerimeter() << endl;
}




