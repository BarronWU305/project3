#include <iostream>
#include <string>
#include <fstream> //ADDED IN FSTREAM IN CASE FILES NEED READING IN
#include <Node.h>  //HEADER FILES
#include <Shape.h>
#include <ShapeQueue.h>
#include <ShapeReader.h>


using namespace std;

int main() {
	// VARS NEEDED
	string fileName;
	ShapeQueue Queue;
	int codeReturn; // BC IT'S RETURNING AN INT, FIGURE WE USE IT HERE
	int length;		// none of this may be needed, but we will include anyways.
	int height;
	int base;
	int width;
	int radius; // MAY NOT NEED
	string userinput; 
	

	// GET FILE NAME WE NEED TO BE READ IN
	cout << "Enter out the name of the file that we will be reading in" << endl;
	cin >> fileName;

	// FIGURE WE CAN JUST CALL TO READ IT FROM THE READER FILE WE HAVE
	codeReturn = readFile(fileName, Queue); // CALL IT HERE AND SET IT TO THE VAR

	// AND PRINT OUT THE QUEUE SINCE IT'S ALREADY CALLING THE PRINT FUNC FOR THE SHAPES
	if (codeReturn == 0) {
		cout << "Shape in our Queue: " << endl;
		Queue.printQueue();
	} 
	// FALLBACK OFC
	else {
		cout << "Failed to read the shapes T_T" << endl;
		return 1; // MISSION ABORT
	}

	// More options for the user?
	//Include a while loop that allows users to read in more files in order to change the outcomes. which will be structured below: 
	cout << "Would you like to read in from another file? type 'Yes' or 'No'" << endl; 
	cin >> userinput; 

	if (userinput == "Yes" || userinput == "yes") {
		while (userinput != "no" || userinput != "No") {
		cout << "Enter out the name of the file that we will be reading in" << endl;
		cin >> fileName;
		}
	}



	// All is good :)
	return 0;
}
