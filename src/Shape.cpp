#include <Shape.h>
#include <iostream>
#include <string>
using namespace std;

Shape::Shape(string name) : name_(name) {}

string Shape::getName() {
    return name_;
}

