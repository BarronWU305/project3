#include <Shape.h>
class Node {
public:
	//constructors
	Node();
	Node(Shape* storedShape, Node* nextNode = nullptr);
	//accessors
	Node* getNext() const;
	Shape* getShape() const;
	//mutators
	void setNext(Node* nextNode);
	void setShape(Shape* storedShape);
protected:
	Shape* shape_;
	Node* next_;
};