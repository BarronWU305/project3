#include <Shape.h>
#include <Node.h>

// default constructor
Node::Node() : shape_(nullptr), next_(nullptr), previous_(nullptr) {}

// must have shape pointer, next and previous node optional
Node::Node(Shape* StoredShape, Node* NextNode, Node* PreviousNode) : shape_(StoredShape), next_(NextNode), previous_(NextNode) {}

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
void Node::setNext(Node* NextNode) {
	this->next_ = NextNode;
}

// sets the previous node
void Node::setPrevious(Node* PreviousNode){
	this->previous_ = PreviousNode;
}

// sets the shape object
void Node::setShape(Shape* StoredShape) {
	this->shape_ = StoredShape;
}

