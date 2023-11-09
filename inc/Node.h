#pragma once
#ifndef NODE_H_
#define NODE_H_

#include <Shape.h>

class Node {
public:
	//constructors
	Node();
	Node(Shape* StoredShape, Node* NextNode = nullptr, Node* PreviousNode = nullptr);

	//accessors
	Node* getNext() const;
	Node* getPrevious() const;
	Shape* getShape() const;

	//mutators
	void setNext(Node* NextNode);
	void setPrevious(Node* PreviousNode);
	void setShape(Shape* StoredShape);
	
protected:
	Shape* shape_;   // shape object to be stored
	Node* next_;     // pointer to next node
	Node* previous_; // pointer to previous node
};

#endif
