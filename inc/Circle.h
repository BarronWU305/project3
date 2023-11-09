#ifndef CIRCLE_H_
#define CIRCLE_H_

#include<Ellipse.h>

using namespace std;

class Circle : public Ellipse  {
public: 
  Circle(double Radius);
  
  virtual double getArea() const;
  virtual double getPerimeter() const;
  virtual void print() const;

  double getRadius() const;
  void setRadius(double Radius);

protected:
  double radius_;

};


#endif
