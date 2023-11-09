#ifndef ELLIPSE_H_
#define ELLIPSE_H_

#include <Shape.h>

using namespace std;

class Ellipse : public Shape {
public:
    Ellipse(double AxisFirst, double AxisSecond);

    //Accessor Methods
    virtual void getFirstAxis() const;
    virtual void getSecondAxis() const;

    //Mutator Methods
    virtual double getArea() const;
    virtual double getPerimeter() const;

    virtual void print() const;

protected:
    double axis_first_;
    double axis_second_;
};

#endif