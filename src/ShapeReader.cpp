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

           else if (shapeName == "Square") {} // Etc...
        }
    }

    void *ptr = new Circle

//queue.InsertShape(ptr)
//open read in file
// add to queue 
    return retunrCode;
}

// switch
// read in file , make shape, add to queue
