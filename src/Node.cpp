//Node.cpp
//Node implementation file

#include "Node.h"

//default constructor
Node::Node(): q{nullptr}, next{nullptr}, prev{nullptr}
{}

//copy constructor
Node::Node(const Node & n)
{
    /*
    //create new memory
    Question * q = new Question();

    //copy memory
    strcpy(q, n.q);
    next = n.next;
    prev = n.prev;
    */
}

//constructor with arg
Node::Node(Question *& newQuestion)
{
    q = newQuestion;
    next = NULL;
    prev = NULL;
}

//destructor
Node::~Node()
{
    if(next)
        next->prev = NULL;
    q = NULL;
    next = NULL;
    prev = NULL;
}

//get next
Node * Node::goNext()
{
    return next;
}


//get previous
Node * Node::goPrev()
{
    return prev;
}

//set next
void Node::setNext(Node *& toSet)
{
    next = toSet;
    toSet->prev = this;
}

//set previous
void Node::setPrev(Node *& toSet)
{
    prev = toSet;
    toSet->next = this;
}

//display
void Node::display()
{
    q->display();
}
