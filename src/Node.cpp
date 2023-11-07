#include <Shape.h>
#include <Node.h>

Node* Node::getNext() const {
	return next_;
}

Shape* Node::getShape() const {
	return stored_shape_;
}

void Node::setNext(Node* nextNode) {
	this->next_ = nextNode;
}

void Node::setShape(Shape* storedShape) {
	this->stored_shape_ = storedShape;
}

