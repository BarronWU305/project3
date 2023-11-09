#include <iostream>
#include <string>
#include <fstream> //ADDED IN FSTREAM IN CASE FILES NEED READING IN
#include <Node.h> //HEADER FILES
#include <Shape.h>
#include <ShapeQueue.h>
#include <ShapeReader.h>

using namespace std; 

int main() {
//VARS NEEDED
    string fileName;
	ShapeQueue Queue; 
    int codeReturn; // BC IT'S RETURNING AN INT, FIGURE WE USE IT HERE 

//GET FILE NAME WE NEED TO BE READ IN  
	cout << "Enter out the name of the file that we will be reading in" << endl; 
	cin >> fileName; 

// FIGURE WE CAN JUST CALL TO READ IT FROM THE READER FILE WE HAVE 
	codeReturn = readFile(fileName, Queue); // CALL IT HERE AND SET IT TO THE VAR

// AND PRINT OUT THE QUEUE SINCE IT'S ALREADY CALLING THE PRINT FUNC FOR THE SHAPES 
	if(codeReturn == 0) {
		cout << "Shape in our Queue: " << endl; 
		Queue.printQueue(); 
	}
// FALLBACK OFC 
	else {
		cout << "Failed to read the shapes T_T" << endl; 
	}
	
// More options for the user?
//option that allows user to pick a shape 


//option that allows user to pick size per. 


//All is good :)
    return 0; 
}
