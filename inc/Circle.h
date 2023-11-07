#ifndef CIRCLE_H_
#define CIRCLE_H_


#include<Ellipse.h>

using namespace std;

class Circle : public Ellipse  {
    public: 
      void getArea();
      void getPerimeter();
      void print();
      void setAxises();

    protected:
      double radius_;

}







#endif
#define CIRCLE_H_