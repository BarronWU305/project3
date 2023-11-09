#ifndef RIGHTTRIANGLE_H_
#define RIGHTTRIANGLE_H_

#include<iostream>
#include<string>
#include<iomanip>

#include<Shape.h>

using namespace std;

class RightTriangle : public Shape {
public:
    RightTriangle(double Base, double Height);
    
    void setBase (double Base);// get and set the base for triangle
    double getBase() const;

    void setHeight (double Height);// get and set the height for triangle
    double getHeight() const;

    virtual double getArea() const;
    virtual double getPerimeter() const;
    virtual void print() const;

protected: 
    double base_;
    double height_;

};

#endif