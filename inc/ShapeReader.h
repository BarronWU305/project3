#ifndef SHAPEREADER_H_
#define SHAPEREADER_H_

#include <ShapeQueue.h>
#include <Shape.h>
#include <Circle.h>
#include <Ellipse.h>
#include <Hexagon.h>
#include <Rectangle.h>
#include <RightTriangle.h>
#include <Square.h>

using namespace std;

class ShapeReader {
public: 
  //  ShapeReader(); 
    int readFile(string filename, ShapeQueue &queue);

};

#endif
