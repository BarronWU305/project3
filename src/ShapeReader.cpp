#include <ShapeReader.h>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//Function readFile takes in two parameters 
int readFile(string filename, ShapeQueue &queue) {
     int returnCode = 0;

     //Opens files
     ifstream fin;
     fin.open(filename);

     //Checks if file could be opened 
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
                         fin.clear();
                    }
                    else {
                         Shape *ptr = new Circle(radius); 
                         queue.pushShape(ptr);
                    }
               }
               else if (shapeName == "Square") {
                    double length;
                    fin >> length;
                    // Check if reading failed
                    if (fin.fail()) {
                         cerr << "ERROR: Failed to read length or width." << endl;
                         fin.clear();
                    }
                    else {
                         Shape *ptr = new Square(length);
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
                         fin.clear();
                    }
                    else {
                         Shape *ptr = new Ellipse(firstAxis, secondAxis); // Except the Ellipse.h doesn't show this constructor
                         queue.pushShape(ptr);
                    }
               }
               else if (shapeName == "Hexagon") {
                    int sideLength;
                    fin >> sideLength;
                    // Check if reading failed
                    if (fin.fail()) {
                         cerr << "ERROR: Failed to read side length." << endl;
                         fin.clear();
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
                         fin.clear();
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
                         fin.clear();
                    }
                    else {
                         Shape *ptr = new RightTriangle(base, height); 
                         queue.pushShape(ptr);
                    }
               }

               fin.ignore();
          }

          
          fin.close(); // Close the file after reading
     }
          
     return returnCode; //Returns the code 
}
