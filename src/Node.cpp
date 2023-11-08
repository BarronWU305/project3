#include <Shape.h>
#include <Node.h>

Node::Node() : shape_(nullptr), next_(nullptr) {}

// must have shape pointer, next node optional
Node::Node(Shape* storedShape, Node* nextNode) : shape_(storedShape), next_(nextNode) {}

Node* Node::getNext() const {
	return next_;
}

Node* Node::getPrevious() const {
	return previous_;
}

Shape* Node::getShape() const {
	return shape_;
}

void Node::setNext(Node* nextNode) {
	this->next_ = nextNode;
}

void Node::setPrevious(Node* previousNode){
	
}

void Node::setShape(Shape* storedShape) {
	this->shape_ = storedShape;
}

