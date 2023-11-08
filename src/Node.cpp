#include <Shape.h>
#include <Node.h>

// default constructor
Node::Node() : shape_(nullptr), next_(nullptr), previous_(nullptr) {}

// must have shape pointer, next and previous node optional
Node::Node(Shape* storedShape, Node* nextNode, Node* previousNode) : shape_(storedShape), next_(nextNode), previous_(nextNode) {}

// returns pointer to next node
Node* Node::getNext() const {
	return next_;
}

// returns pointer to previous node
Node* Node::getPrevious() const {
	return previous_;
}

// returns pointer to shape object
Shape* Node::getShape() const {
	return shape_;
}

// sets the next node
void Node::setNext(Node* nextNode) {
	this->next_ = nextNode;
}

// sets the previous node
void Node::setPrevious(Node* previousNode){
	this->previous_ = previousNode;
}

// sets the shape object
void Node::setShape(Shape* storedShape) {
	this->shape_ = storedShape;
}

