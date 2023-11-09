#include <Shape.h>
#include <iostream>
#include <string>
using namespace std;

double Shape::getArea()
{
}
double Shape::getPerimeter()
{
}
string Shape::getName(string shapename)
{
    name_ = shapename;
    return name_;
}
void Shape::print()
{
    cout << name_ << endl;
}
