#include <Shape.h>
class Node {
public:
	//accessors
	Node* getNext() const;
	Shape* getShape() const;
	//mutators
	void setNext(Node* nextNode);
	void setShape(Shape* storedShape);
protected:
	Node* next_;
	Shape* stored_shape_;
};