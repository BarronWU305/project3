#ifndef ELLIPSE_H_
#define ELLIPSE_H_

#include <Shape.h>

using namespace std;

class Ellipse : public Shape
{
public:
    // Constructor Method
    Ellipse(double AxisFirst, double AxisSecond);

    // Accessor Methods
    virtual double getFirstAxis() const;
    virtual double getSecondAxis() const;

    // Mutator Methods
    virtual double getArea() const;
    virtual double getPerimeter() const;

    // Print Method
    virtual void print() const;

protected:
    double axis_first_;  // First Axis
    double axis_second_; // Second Axis
};

#endif