#include <iostream>
#include <ShapeQueue.h>
#include <Node.h>

ShapeQueue::ShapeQueue() : front_(NULL) {}

ShapeQueue::ShapeQueue(const ShapeQueue &sourceShape)
{
    this->front_ = NULL;

    if(front_ == NULL && back_ == NULL){
    Node *current = sourceShape.front_, sourceShape.back_;
     while (current != NULL)
    {
        current->GetData();
        this->Push(current->GetData())
            current = current->GetNextNode();
    }
} 
    }



void ShapeQueue::pushShape(string shape_){
    Node *newNode = new Node (shape_, back_);
    back_ = newNode;
}

string ShapeQueue::popShape(){
    string poppedData = "";

    if(!*back_ == NULL) {
        string poppedData += front_->GetData

        newFront_ = front_->GetNextNode();
        front_ = newFront_
        

        delete newFront_

    }
    return poppedData
}