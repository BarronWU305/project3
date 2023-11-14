#include <Shape.h>
#include <iostream>
#include <string>
using namespace std;

Shape::Shape(string Name) : name_(Name) {
    // No-op
}

string Shape::getName() const {
    return name_;
}
