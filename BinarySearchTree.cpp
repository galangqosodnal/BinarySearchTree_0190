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

            //step 1: allocate memory for the new node
            Node *newNode = new Node();

            //step 2: assign value to the data felid pf the new node
            newNode->info = x;

            //step 3: make the left and right child of the new node point to null
            newNode->leftchild = nullptr;

            //step 4: locate the node which will be the parent of the node to be inserted
            Node *parent = nullptr;
            Node *currentNode = nullptr;
            search(x, parent, currentNode);

            //step 5: if parent NULL (tree is empty)
            if (parent == nullptr)
            {
                //5a: mark the new node as ROOT
                ROOT = newNode;

                //5b: EXIT
                return;
            }

            //step 6: if the value in the data field of new node is less than that of parent
            if (x < parent->info)
            {
                //6a: make the left child of parent point to the new node
                parent->leftchild = newNode;

                //6b: EXIT
                return;
            }

            
