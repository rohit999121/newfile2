#include <iostream>
#include "binaryTree3.h"
using namespace std;


class Tree
{
    Node *root;
public:
    Tree(){root = NULL;}
    void TreeCreate();

    void Preorder(){Preorder(root); }
    void Preorder(Node *ptr);

    void Postorder(){Postorder(root);}
    void Postorder(Node *ptr);


    void Inorder(){Inorder(root);}
    void Inorder(Node *ptr);

    void Levelorder(Node *ptr);
    void Levelorder(){Levelorder(root);}

    int Height(Node *root);
    int Height(){return Height(root);}
};

void Tree :: TreeCreate()
{
    Node *temp,*ptr;
    int x;
    Queue q(100);

    cout << "enter root value :" << endl;
    cin >> x;

    root = new Node;
    root->data = x;
    root->lchild = NULL;
    root->rchild = NULL;

    q.enqueue(root);
    while(!q.isEmpty()){
        ptr = q.dequeue();
        cout << "enter left child :" << ptr->data << endl;
        cin >> x;
        if(x!=-1){
            temp = new Node;
            temp->data = x;
            temp->lchild = NULL;
            temp->rchild = NULL;
            ptr->lchild = temp;
            q.enqueue(temp);
        }
        cout << "enter right child :" << ptr->data << endl;
        cin >>x;
        if(x!=-1){
            temp = new Node;
            temp->data = x;
            temp->lchild = NULL;
            temp->rchild = NULL;
            ptr->rchild = temp;
            q.enqueue(temp);
        }
    }

}

void Tree ::Preorder(Node *ptr)
{
   if(ptr){
    cout << ptr->data << " ";
    Preorder(ptr->lchild);
    Preorder(ptr->rchild);
   }
}

void Tree ::Inorder(Node *ptr)
{
    if(ptr){
        Inorder(ptr->lchild);
        cout << ptr->data << " " ;
        Inorder(ptr->rchild);
    }
}

void Tree::Levelorder(struct Node *root)
{
 Queue q(100);

 cout << root->data;
 q.enqueue(root);

 while(!q.isEmpty())
 {
 root=q.dequeue();
 if(root->lchild)
 {
 cout << root->lchild->data;
 q.enqueue(root->lchild);
 }
 if(root->rchild)
 {
 cout << root->rchild->data;
 q.enqueue(root->rchild);
 }
 }
}

int Tree ::Height(Node *ptr){
    int x=0,y=0;
    if(root == 0)
        return 0;
    x = Height(root->lchild);
    y = Height(root->rchild);
    if(x>y){
        return x+1;
    }
    else{
        return y+1;
    }
}

int main()
{
    Tree t;
    t.TreeCreate();
    cout << "preorder" << endl;
    t.Preorder();
    cout << endl;

    cout << "inorder" << endl;
    t.Inorder();
    cout << endl << endl;

    return 0;
}
