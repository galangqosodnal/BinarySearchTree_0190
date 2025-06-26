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

class BinaryTree
{
    public:
        Node *ROOT;

        BinaryTree()
        {
            ROOT = nullptr; // intiallize ROOT to null
        }

        void insert()
        {
            int x;
            cout << "Masukan nilai: ";
            cin >> x;

           
