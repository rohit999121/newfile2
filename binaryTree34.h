#include<iostream>

#ifndef BINARYTREE3_H_INCLUDED
#define BINARYTREE3_H_INCLUDED
using namespace std;

class Node
{
public:
    Node *lchild;
    Node *rchild;
    int data;
};

class Queue
{
private:
    int front;
    int rear;
    int size;
    Node **Q;

public:
    Queue(){front=rear=-1;size=10; Q=new Node*[size];}
    Queue(int size){front=rear=-1;this->size= size; Q = new Node*[this->size];}

    void enqueue(Node *ptr);
    Node *dequeue();
    int isEmpty(){return front == rear;}
};

void Queue :: enqueue(Node *x)
{

    if(rear == size-1)
    {
        cout << "full" << endl;
    }
    else{
        rear++;
        Q[rear] = x;
    }
}

Node* Queue :: dequeue()
{
    Node *x = NULL;
    if(front == rear){
        cout << "empty" << endl;
    }
    else{
        x = Q[front+1];
        front++;
    }
    return x;
}



#endif // BINARYTREE3_H_INCLUDED
