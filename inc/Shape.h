#ifndef SHAPE_H_
#define SHAPE_H_

#include <iostream>
#include <string>
using namespace std;

class Shape
{
public:
    virtual double getArea() = 0; // used by derived classes for area
    virtual double getPerimeter() = 0; // used by derived classes for area
    string getName(string shapename); // gets name of shape from input and returns it
    void print();

private:
    string name_;
};
#endif