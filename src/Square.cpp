#include <Square.h>

Square::Square(double Side) : Rectangle(Side, Side) {
  name_ = "Square";
}



 void Square::setLength (double Length) {
  Rectangle::setLength(Length);
  Rectangle::setWidth(Length);
 }

  void Square::setWidth (double Width) {


    
  }
 // Also handle setWidth
