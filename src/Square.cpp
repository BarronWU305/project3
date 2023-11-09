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

void Square::print(double Length, double Width, double Area, double Perimeter) const{
  std::cout << "Shape: Square" << std::endl;
  Length = getLength();
  std::cout << "Length: " << Length << std::endl;
  Width = getWidth();
  std::cout << "Width: " << Width << std::endl;
  Area = getArea(getLength());
  std::cout << "Area: " << Area << std::endl;
  Perimeter = getPerimeter(getLength());
  std::cout << "Perimeter: " << Perimeter << std::endl;
}
