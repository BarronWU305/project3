#include <iostream>
#include <string>
#include <fstream> //ADDED IN FSTREAM IN CASE FILES NEED READING IN
#include <Circle.h>//HEADERFILES HERE
#include <Hexagon.h>
#include <Ellipse.h>
#include <Node.h>
#include <Rectangle.h>
#include <Square.h>
#include <RightTriangle.h>
#include <Shape.h>
#include <ShapeQueue.h>
#include <ShapeReader.h>

using namespace std; 

int main() {
//VARS NEEDED
    string fileName;
 
    

//GET FILE NAME WE NEED TO BE READ IN  
	cout << "Enter out the name of the file that we will be reading in << endl; 
	cin >> fileName; 

//FOR INPUT ERRORS WHEN FILE OPEN 
	ifstream inputFile(fileName); 
	if(!inputfile)
	{ 
		cout << "ERROR: the file cannot be opened. Try again" << endl; 
	}





//CLOSES FILE AT THE END
	inputFile.close(); 


//All is good :)
    return 0; 
}
