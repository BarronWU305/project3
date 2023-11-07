#ifndef SHAPE_H_
#define SHAPE_H_

#include <iostream>
#include <string>
using namespace std;

class Shape
{
public:
    double getArea();
    double getPerimeter();
    string getName();
    void print();

private:
    string name_;
};
#endif