#include <Square.h>

Square::Square(double Side) : Rectangle(Side, Side) {
  name_ = "Square";
}



 void Square::setLength (double Length) {
  Rectangle::setLength(Length);
  Rectangle::setWidth(Length);
 }

 // Also handle setWidth
