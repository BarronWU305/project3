#ifndef SHAPEQUEUE_H_
#define SHAPEQUEUE_H_

#include <iostream>
#include <string>
#include <Node.h>
#include <Shape.h>

using namespace std;

class ShapeQueue {
public:
    ShapeQueue();
    ShapeQueue(const ShapeQueue &sourceShape);

    void pushShape(Shape *shape_);
    Shape *popShape();
    
    void printQueue() const;

private:
    Node *front_;
    Node *back_;
};

#endif