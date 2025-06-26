#include <iostream>
using namespace std;

class Node
{
    public:
       int info;
       Node *leftchild;
       Node *rightchild;

       //constructor for the Node class
       Node()
       {
        leftchild = nullptr; // intiallize left child to null
        rightchild = nullptr; // intiallize right child to null
       }
};