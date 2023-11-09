#ifndef ELLIPSE_H_
#define ELLIPSE_H_

#include <Shape.h>

using namespace std;

class Ellipse : public Shape {
public:
    Ellipse(double AxisFirst, double AxisSecond);

    virtual double getArea() const;
    virtual double getPerimeter() const;

    double getFirstAxis() const;
    double getSecondAxis() const;

    virtual void print() const;

protected:
    double axis_first_;
    double axis_second_;
};

#endif