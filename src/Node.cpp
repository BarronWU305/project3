#include <Shape.h>
#include <Node.h>

Node::Node() : shape_(nullptr), next_(nullptr), previous_(nullptr) {}

// must have shape pointer, next node optional
Node::Node(Shape* storedShape, Node* nextNode, Node* previousNode) : shape_(storedShape), next_(nextNode), previous_(nextNode) {}

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
	this->previous_ = previousNode;
}

void Node::setShape(Shape* storedShape) {
	this->shape_ = storedShape;
}

