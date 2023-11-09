#ifndef SHAPE_H_
#define SHAPE_H_

#include <iostream>
#include <string>
using namespace std;

class Shape {
public:
    Shape(string Name);

    virtual double getArea() = 0; // used by derived classes for area
    virtual double getPerimeter() = 0; // used by derived classes for area
    virtual void print() = 0;

    string getName(); // gets name of shape from input and returns it

protected:
    string name_;
};
#endif