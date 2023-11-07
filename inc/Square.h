#ifndef SQUARE_H_
#define SQUARE_H_

#include <string>
#include "Rectangle.h"

class Square : public Rectangle {
  public:
    void getArea();
    void getPerimeter();
    void print();
  private:
    int length_;
    int width_;
    std::string name_;
};

#endif // !SQUARE_H_
#define SQUARE_H_
