#ifndef SQUARE_H_
#define SQUARE_H_

#include "../inc/Rectangle.h"

class Square : public : Rectangle {
  public:
    void getArea();
    void getPerimeter();

  private:
    int length_;
    int width_;
};

#endif // !SQUARE_H_
#define SQUARE_H_
