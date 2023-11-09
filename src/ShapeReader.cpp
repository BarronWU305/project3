#include <ShapeReader.h>
#include <iostream>
#include <fstream>
#include <string>

int readFile(string filename, ShapeQueue &queue) {
     int returnCode = 0;

     ifstream fin;
     fin.open(filename);

     if (!fin.is_open()) {
          cerr << "ERROR:" << filename << " does not exist." << endl;
          returnCode = 1;
     }
     else {
          while (!fin.eof()) {
               string shapeName;
               fin >> shapeName;

               if (shapeName == "Circle") {
                    double radius;
                    fin >> radius;
                    // Check if reading failed
                    if (fin.fail()) {
                         cerr << "ERROR: Failed to read radius." << endl;
                    }
                    else {
                         Shape *ptr = new Circle(radius); 
                         queue.pushShape(ptr);
                    }
               }
               else if (shapeName == "Square") {
                    double side;
                    fin >> side;
                    // Check if reading failed
                    if (fin.fail()) {
                         cerr << "ERROR: Failed to read length or width." << endl;
                    }
                    else {
                         Shape *ptr = new Square(side);
                         queue.pushShape(ptr);
                    }
               }
               else if (shapeName == "Ellipse") {
                    double firstAxis;
                    double secondAxis;
                    fin >> firstAxis >> secondAxis;
                    // Check if reading failed
                    if (fin.fail()) {
                         cerr << "ERROR: Failed to read first and second Axis." << endl;
                    }
                    else {
                         Shape *ptr = new Ellipse(firstAxis, secondAxis); 
                         queue.pushShape(ptr);
                    }
               }
               else if (shapeName == "Hexagon") {
                    int sideLength;
                    fin >> sideLength;
                    // Check if reading failed
                    if (fin.fail()) {
                         cerr << "ERROR: Failed to read side length." << endl;
                    }
                    else {
                         Shape *ptr = new Hexagon(sideLength); 
                         queue.pushShape(ptr);
                    }
               }

               else if (shapeName == "Rectangle") {
                    double length;
                    double width;
                    fin >> length >> width;
                    // Check if reading failed
                    if (fin.fail()) {
                         cerr << "ERROR: Failed to read length or width." << endl;
                    }
                    else {
                         Shape *ptr = new Rectangle(length, width); 
                         queue.pushShape(ptr);
                    }
               }

               else if (shapeName == "RightTriangle") {
                    double base;
                    double height;
                    fin >> base >> height;
                    // Check if reading failed
                    if (fin.fail()) {
                         cerr << "ERROR: Failed to read base or height." << endl;
                    }
                    else {
                         Shape *ptr = new RightTriangle(base, height); 
                         queue.pushShape(ptr);
                    }
               }
          }

          fin.close(); // Close the file after reading
     }

     return returnCode;
}
