#include <iostream>
#include <ShapeQueue.h>
#include <Node.h>

ShapeQueue::ShapeQueue() : front_(nullptr), back_(nullptr) {}

ShapeQueue::ShapeQueue(const ShapeQueue &sourceShape) {
    this->front_ = sourceShape.front_;
    this->back_ = sourceShape.back_;

    Node *current = sourceShape.front_;

    while (current != nullptr) {
        current->getShape();
        this->pushShape(current->getShape());
        current = current->getNext();
    }
}

void ShapeQueue::pushShape(Shape *shape_) {
    Node *newNode = new Node(shape_, back_);
    if( back_ == nullptr && front_ ==nullptr){
        back_, front_ == newNode;
    }
    else
    {
        back_ = newNode;
    }
    // What if back_ and front_ are NULL (i.e., the list is empty)?
    
}

Shape *ShapeQueue::popShape() {
    Shape *poppedData;

    if (front_ == nullptr) { // What if there's nothing in the list
      // Keep in mind that both back_ and front_ should be nullptr
      return nullptr;// There's nothing to send back
    }

    else if (front_ == back_) {
        front_ = back_ = nullptr;
         // Or what if there's only one thing in the list
       // ??? // Make sure to deal with both ptrs
    }

    else // Otherwise there are currently two or more items in the list
    {
        poppedData = front_->getShape();
        Node *temp = front_;
        front_= front_ -> getNext(); 

        delete temp;
    }

    return poppedData;

}

void ShapeQueue::printQueue() const {
    Node *current = front_;

    // Do you want any kind of header?
    cout << "Queue Contents" << endl;
    while (current != nullptr) {
        current->getShape()->print();
        cout << "\n";
        current = current->getNext();
        // Do you want to put whitespace between the shape prints?
    }
    // Do you want any kind of footer?
    cout << "End of Queue" << endl;
}