//List.cpp
//List implementation file

#include "List.h"

//default constructor
List::List(): head{nullptr}, tail{nullptr}
{}

//copy constructor
List::List(const List & l)
{

}

//destructor
List::~List()
{
    removeAll();
}

//insert node into list
void List::insert(Node *& toAdd)
{
    //if list is empty
    if(!head)
    {
        head = toAdd;
        tail = toAdd;
    }

    //if list has one or more elements
    if(head)
    {
        tail->setNext(toAdd);
        toAdd->setPrev(tail);
        tail = toAdd;
    }
}

//insert question into list
void List::insert(Question *& q)
{
    Node * n = new Node(q);
    insert(n);
}

//display list wrapper
void List::display()
{
    //if list has no nodes
    if(!head)
        return;

    //if list has only one node
    if(head == tail)
    {
        head->display();
        return;
    }

    //if list has more than one node
    display(head);
}

//display list recursive
void List::display(Node * head)
{
    //base case
    if(head == tail)
    {
        head->display();
        return;
    }

    head->display();
    display(head->goNext());
}

//remove all items in list
void List::removeAll()
{
    //if list is empty
    if(!head)
    {
        head = NULL;
        tail = NULL;
    }

    //if list only has one element
    if(head == tail)
    {
        delete head;
        delete tail;
        head = NULL;
        tail = NULL;
    }

    //if list has more than one element
    removeAll(head);
}

//remove all items recursive
void List::removeAll(Node * head)
{
    //base case
    if(head == tail)
    {
        delete head;
        head = NULL;
        tail = NULL;
        return;
    }
    
    Node * temp = head;
    head = head->goNext();
    delete temp;
    removeAll(head);
}
