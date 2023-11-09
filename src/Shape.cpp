#include <Shape.h>
#include <iostream>
#include <string>
using namespace std;

Shape::Shape(string Name) : name_(Name) {}

string Shape::getName() {
    return name_;
}
