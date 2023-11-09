#ifndef HEXAGON_H_
#define HEXAGON_H_
#include<Shape>

using namespace std;

class Hexagon : public Shape{
public:
  Hexagon(double Length);
  void getLength();
  virtual void getArea();
  virtual void getPerimeter();
  virtual void print();
protected:
  double length_;
