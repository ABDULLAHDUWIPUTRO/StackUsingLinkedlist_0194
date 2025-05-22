#include <iostream>

using namespace std;

//node class representing a single node in the linked list
class node {
    public:
    int data;
    node* next;

    node() {
        next = NULL;
    
    }
};

// stack class
class stack {
    private:
    node* top; // pointer to the top node of the stack

    public:
    stack() {
        top = NULL; //initialize the stack with a null top pointer
    }
};