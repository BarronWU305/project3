#include<iostream>
#include<iomanip>
#include<Hexagon.h>

Hexagon::Hexagon(double Length) 
  : Shape("Hexagon"), length_(Length) {}

void Hexagon::getLength(double Length){
  length_ = Length;
}
double Hexagon::getArea() const; {
  return (((3 * sqrt(3)) / 2) * length_);
}
double Hexagon::getPerimeter() const; {
  return (length_ * 6);
}
void Hexagon::print() const {
  cout << "Shape: " << getName() << endl;
  cout << "Length = " << getLength() << endl;
  cout << "Area = " << getArea() << endl;
  cout << "Perimeter = " << getPerimeter() << endl;
}
  

