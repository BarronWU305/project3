#include<iostream>
#include<iomanip>
#include<Hexagon.h> // Include the header file for the hexagon class
#include<cmath>
 //Constructor for the Hexagon
Hexagon::Hexagon(double Length) 
  : Shape("Hexagon"), length_(Length) {}
//  Function to get the length 
double Hexagon::getLength() const {
  return length_;
}
// Function to calculate the area of a the Hexagon
double Hexagon::getArea() const {
  return (((3 * sqrt(3)) / 2) * length_);
}
// Function to calculate the perimeter
double Hexagon::getPerimeter() const {
  return (length_ * 6);
}
// Print information about the hexagon
void Hexagon::print() const {
  cout << "Shape: " << getName() << endl;
  cout << "Length = " << getLength() << endl;
  cout << "Area = " << getArea() << endl;
  cout << "Perimeter = " << getPerimeter() << endl;
}
  

