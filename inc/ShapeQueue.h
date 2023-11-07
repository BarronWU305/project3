#ifndef SHAPEQUEUE_H_
#define SHAPEQUEUE_H_

#include <iostream>
#include <string>
#include <Node.h>
using namespace std;

class ShapeQueue
{
public:
    ShapeQueue();
    ShapeQueue(const ShapeQueue &sourceShape);
    void pushShape(string shape_);
    void printQueue() const;
    string popShape();

private:
    Node *front_;
    Node *back_;
};
#endif