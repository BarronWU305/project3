#include <Square.h>

Square::Square(double Side) : Rectangle(Side, Side) {
  name_ = "Square";
}

virtual void Square::setLength (double Length) {
  Rectangle::setLength(Length);
  Rectangle::setWidth(Length);
}

<<<<<<< HEAD
virtual double Square::getArea(double Length) const {
  double area = Length * Length;
  return area;
}

virtual double Square::getPerimeter() const {
  double perimeter = Length * 4;
  return perimeter;
}
=======
  void Square::setWidth (double Width) {


    
  }
 // Also handle setWidth
>>>>>>> refs/remotes/origin/main
