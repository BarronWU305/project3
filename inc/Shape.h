#ifndef SHAPE_H_
#define SHAPE_H_

#include <iostream>
#include <string>
using namespace std;

class Shape {
public:
    Shape(string Name);

    virtual double getArea() const = 0; // used by derived classes for area
    virtual double getPerimeter() const = 0; // used by derived classes for area
    virtual void print() const = 0;

    string getName() const; // gets name of shape from input and returns it

protected:
    string name_;
};
#endif