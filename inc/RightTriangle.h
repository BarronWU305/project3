#ifndef RIGHTTRIANGLE_H_
#define RIGHTTRIANGLE_H_

#include<iostream>
#include<string>
#include<iomanip>

#include<Shape.h>

using namespace std;

class RightTriangle : public Shape {
public:
    // Constructor Method
    RightTriangle(double Base, double Height);
    
    void setBase (double Base);// get and set the base for triangle
    double getBase() const;

    void setHeight (double Height);// get and set the height for triangle
    double getHeight() const;

    virtual double getArea() const; //declaring polymorphic getArea method
    virtual double getPerimeter() const; //declaring polymorphic getPerimeter method
    virtual void print() const; //declaring print function

protected: 
    double base_; // variable for base
    double height_; // variable for height 

};

#endif