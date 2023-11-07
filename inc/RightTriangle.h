#ifndef RIGHTTRIANGLE_H_
#define RIGHTTRIANGLE_H_

#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

class RightTriangle{
public:
    void SetBase (int Base);// get and set the base for triangle
    int GetBase();

    void SetHeight (int Height);// get and set the height for triangle
    int GetHeight();


private: 
    int base_;
    int height_;

}

#endif