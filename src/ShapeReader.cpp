#include <ShapeReader.h>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;


void ShapeReader::readFile(string filename, ShapeQueue &queue) {
    int returnCode = 0;

    ifstream fin; 
    fin.open(filename);
    
    if (!fin.is_open()){
        
        cerr << "ERROR:" << filename << " does not exist." << endl;
        returnCode = 1;
    }
    else {
           void *ptr = new Circle
    }

    void *ptr = new Circle

//queue.InsertShape(ptr)
//open read in file
// add to queue 

}

// switch
// read in file , make shape, add to queue
