#include <ShapeReader.h>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int readFile(string filename, ShapeQueue &queue) {
    int returnCode = 0;

    ifstream fin; 
    fin.open(filename);
    
    if (!fin.is_open()){
        
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
             // Do you want to check if that failed?  fin.fail()
               if (fin.fail()) {
                    cerr << "ERROR: Failed to read radius." << endl;
               }
               else {
                    Shape *ptr = new Circle(radius); // Except the Circle.h doesn't show this constructor 
                    queue.pushShape(ptr);
               }
          }

          else if (shapeName == "Square") {
               double length;
               double width;
               fin >> length >> width;

                    // Check if reading failed
               if (fin.fail()) {
                    cerr << "ERROR: Failed to read length or width." << endl;
               }
               else {
                    Shape *ptr = new Square(length, width);
                    queue.pushShape(ptr);
               }
          }

          else if (shapeName = "Ellipse") {
               double firstAxis;
               double secondAxis;
               fin >> firstAxis >> secondAxis;

               if (fin.fail()) {
                    cerr << "ERROR: Failed to read first and second Axis." << endl;                   
               }
               else {
                    Shape *ptr = new Ellipse(firstAxis, secondAxis);
                    queue.pushShape(ptr);
               }
          }

          else if (shapeName = "Hexagon") {
               int sideLength;
               fin >> sideLength;

               if (fin.fail()) {
                    cerr << "ERROR: Failed to read side length." << endl;                   
               }
               else {
                    Shape *ptr = new Hexagon(sideLength);
                    queue.pushShape(ptr);
               }
          }

          else if (shapeName = "Rectangle") {
               double length;
               double width;
               fin >> length >> width;

               if (fin.fail()) {
                    cerr << "ERROR: Failed to read length or width." << endl;
                }
               else {
                    Shape *ptr = new Rectangle(length, width);
                    queue.pushShape(ptr);
               }
          }

          else if (shapeName = "RightTriangle") {
               double base;
               double height;
               fin >> base >> height;

               if (fin.fail()) {
                    cerr << "ERROR: Failed to read base or height." << endl;
               }
               else {
                    Shape *ptr = new RightTriangle(base, height);
                    queue.pushShape(ptr);
               }
          }
     } 
}



  return returnCode;

}
//queue.InsertShape(ptr)
//open read in file
// add to queue 
// switch
// read in file , make shape, add to queue
