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

           // Do you want to check if that failed?  fin.fail()
           if (shapeName == "Circle") {
             double radius;
             fin >> radius;
             // Do you want to check if that failed?  fin.fail()

             Shape *ptr = new Circle(radius); // Except the Circle.h doesn't show this constructor 
             queue.pushShape(ptr);
           }

           else if (shapeName == "Square") {
                double length;
                double width;
                fin >> length >> width;
                //Do you want to check if that failed? fin.fail()

                Shape *ptr = new Square(length, width);
                queue.pushShape(ptr);
           }

           else if (shapeName = "Ellipse") {
            double firstAxis;
            double secondAxis;
            fin >> firstAxis >> secondAxis;
            //Do you want to check if that failed? fin.fail()

            Shape *ptr = new Ellipse(firstAxis, secondAxis);
            queue.pushShape(ptr);
           }

           else if (shapeName = "Hexagon") {
                int sideLenght;
                fin >> sideLength;

                Shape *ptr = new Hexagon(sideLength);
                queue.pushShape(ptr);
           }

           else if (shapeName = "Rectangle") {
                double width;
                double length;
                fin >> width >> length;

                Shape *ptr = new Rectangle(width, length);
                queue.pushShape(ptr);
           }

           else if (shapeName = "RightTriangle") {
                double base;
                double height;
                fin >> base >> height;

                Shape *ptr = new RightTriangle(base, height);
                queue.pushShape(ptr);
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
