#include <Square.h>

Square::Square(double Side) : Rectangle(Side, Side) {
  name_ = "Square";
}

void Square::setLength (double Length) {
  Rectangle::setLength(Length);
  Rectangle::setWidth(Length);
}

void Square::setWidth (double Width) {
  Rectangle::setLength(Width);
  Rectangle::setWidth(Width);
}


void Square::print() const{
  std::cout << "Shape: " << getName() << std::endl;
  std::cout << "Side: " << length_ << std::endl;
  std::cout << "Area: " << getArea() << std::endl;
  std::cout << "Perimeter: " << getPerimeter() << std::endl;
}
