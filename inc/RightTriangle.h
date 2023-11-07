#ifndef RIGHTTRIANGLE_H_
#define RIGHTTRIANGLE_H_

#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

class RightTriangle{
public:
    void setBase (double Base);// get and set the base for triangle
    double getBase() const;

    void setHeight (double Height);// get and set the height for triangle
    double getHeight() const;

    double getArea();


private: 
    double base_;
    double height_;

};

#endif