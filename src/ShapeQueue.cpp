#include <iostream>
#include <ShapeQueue.h>
#include <Node.h>

ShapeQueue::ShapeQueue() : front_(NULL) {}

ShapeQueue::ShapeQueue(const ShapeQueue &sourceShape)
{
    this->front_ = NULL;

    if (front_ == NULL && back_ == NULL)
    {
        Node *current = sourceShape.front_;
        Node *current = sourceShape.back_;

        while (current != NULL)
        {
            current->getShape();
            this->pushShape(current->getShape())
                current = current->getNext();
        }
    }
}

void ShapeQueue::pushShape(string shape_)
{
    Node *newNode = new Node(shape_, back_);
    back_ = newNode;
}

string ShapeQueue::popShape()
{
    string poppedData = "";

    if (!*back_ == NULL)
    {
        string poppedData += front_->getShape();
        *temp = front_;
        front_= front_ -> getNext(); 

        delete temp;
    }

    if(!*front_){
        back_ = nullptr;

    }
    return poppedData

}

void ShapeQueue::printQueue() const{
    Node *current = front_;

    while (current != NULL) {
        cout << " " << current->getShape() << endl;
        current = current->getNext();
    }
}