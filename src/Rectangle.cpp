#include<iostream>
#include<cmath>
#include<iomanip>
#include"../inc/Rectangle.h"



double Rectangle:: getLength() const{
    return length_;

}

double Rectangle:: getWidth() const{
    return width_;
}

double Rectangle:: getArea() const{
    return (width_ * length_);
}




