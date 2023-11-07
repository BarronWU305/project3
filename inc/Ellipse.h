#ifndef ELLIPSE_
#define ELLIPSE_

using namespace std;

public:

double getArea(double axis_first_,double axis_second_);
double getPerimeter(double axis_first_,double axis_second_);
double getFirstAxis();
double getSecondAxis();
virtual void printEllipse();

protected:
double axis_first_;
double axis_second_;


#endif