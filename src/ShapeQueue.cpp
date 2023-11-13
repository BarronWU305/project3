#include <iostream>
#include <ShapeQueue.h>
#include <Node.h>

// Default constructor
ShapeQueue::ShapeQueue() : front_(nullptr), back_(nullptr) {}

// Copy constructor
ShapeQueue::ShapeQueue(const ShapeQueue &sourceShape) {
    // Setting front and back pointers to sourceShape.
    this->front_ = sourceShape.front_;
    this->back_ = sourceShape.back_;

    // Create a new node called current.
    Node *current = sourceShape.front_;

    // Loop through current and push
    // each shape to the queue until
    // it is done.
    while (current != nullptr) {
        current->getShape();
        this->pushShape(current->getShape());
        current = current->getNext();
    }
}

void ShapeQueue::pushShape(Shape *shape_) {
    // Creating a new node with shape information.
    Node *newNode = new Node(shape_, nullptr);

    // Check if back and front are NULL
    // If so we set back and front to newNode.
    if (back_ == nullptr && front_ == nullptr) {
        front_ = newNode;
        back_ = newNode;
    }
    else{
        // If back and front aren't NULL, set back to newNode.
        back_->setNext(newNode);
        back_ = newNode;
    }
}

Shape *ShapeQueue::popShape() {
    Shape *poppedData;

    if (front_ == nullptr) {

        // If nothing is in the queue, return nullptr.

        return nullptr;
    }

    else if (front_ == back_) {
        // If front and back pointers are pointed at the same node,
        // Set front and back to NULL.
        poppedData = front_->getShape();
        front_ = back_ = nullptr;
        

        
    }

    else {
        // Popped the front of the queue, set front to temp,
        // set front_ to the next in line.
        // Then delete temp.
        poppedData = front_->getShape();
        Node *temp = front_;
        front_ = front_->getNext();

        delete temp;
    }

    return poppedData;
}

void ShapeQueue::printQueue() const {
    Node *current = front_;
    //Made a header.
    cout << "Queue Contents" << endl;
    while (current != nullptr) {
    //Print the current node, made a new line
    //Recieved the next node.
        current->getShape()->print();
        cout << endl;
        current = current->getNext();
    }
    //Made a footer.
    cout << "End of Queue" << endl;
}