#ifndef SHAPEREADER_H_
#define SHAPEREADER_H_

#include "ShapeQueue.h"
#include "Circle.h"
#include "Ellipse.h"
#include "Hexagon.h"
#include "Rectangle.h"
#include "RightTriangle.h"

#include <iostream>
#include <fstream>

using namespace std;

class ShapeReader {
public: 
   ShapeReader(); 
    void readFile(string filename, ShapeQueue);
    
//    void addToQueue()

protected: 



};

#endif
