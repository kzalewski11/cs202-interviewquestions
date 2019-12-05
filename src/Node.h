//Node.h
//Node interface file

#include "Question.h"

class Node
{
    public:
        Node();             //default constructor
        Node(const Node &); //copy constructor
        Node(Question *&);  //constructor with arg
        ~Node();            //destructor

        Node * goNext();           //go next
        Node * goPrev();           //go previous
        void setNext(Node *&);    //set next
        void setPrev(Node *&);    //set previous

        void display();     //display node

    private:
        Question * q;       //question pointer
        Node * next;        //next pointer
        Node * prev;        //previous pointer

};
