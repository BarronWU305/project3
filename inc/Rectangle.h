#ifndef RECTANGLE_
#define RECTANGLE_

class Rectangle{

private:
  double length_;
  double width_;

public:
  void setLength (double Length);
  double getLength() const;
  
  void setWidth (double Width);
  double getWidth() const;

  double getArea() const;
  



};
#endif