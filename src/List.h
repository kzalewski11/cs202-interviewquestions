//List.h
//List class interface

#include "Node.h"

class List
{
    public:
        List();             //default constructor
        List(const List &); //copy constructor
        ~List();            //destructor

        void insert(Node *&);   //insert node
        void insert(Question *&); //insert question
        void remove(int);       //remove node
        void display();         //display list
        bool retrieve(int);        //retrieve node
        void removeAll();       //remove all items in list

    private:
        Node * head;        //head pointer
        Node * tail;        //tail pointer

        void display(Node * head);  //recursive display list
        void removeAll(Node * head);    //recursive remove all
};
