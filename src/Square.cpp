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

double Square::getArea(double Length) const {
  double area = Length * Length;
  return area;
}

double Square::getPerimeter(double Length) const {
  double perimeter = Length * 4;
  return perimeter;
}
