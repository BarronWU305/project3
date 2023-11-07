#include <ShapeReader.h>
#include <iostream>
#include <fstream>

using namespace std;


void ShapeReader::readFile(string filename, ShapeQueue &queue) {
    int returnCode = 0;

    ifstream fin; 
    fin.open(filename);

    if (!fin.is_open()){
        
        cerr << "ERROR:" << filename << " does not exist." << endl;
        returnCode = 1;
    }

    


//open read in file
//switch
//switch (shape) {
//    case Circle: 
//          xxxx
// }
// add to queue 

}

// switch
// read in file , make shape, add to queue
