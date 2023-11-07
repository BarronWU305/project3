#ifndef RIGHTTRIANGLE_H_
#define RIGHTTRIANGLE_H_

#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

class RightTriangle{
public:
    void SetBase (double Base);// get and set the base for triangle
    double GetBase();

    void SetHeight (double Height);// get and set the height for triangle
    double GetHeight();


private: 
    double base_;
    double height_;

}

#endif