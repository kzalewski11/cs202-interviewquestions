//Arr.h
//Arr class interface

#include "List.h"

class Arr
{
    public:
        Arr();              //default constructor
        Arr(int);           //consntructor with size arg
        Arr(const Arr &);    //copy constructor
        ~Arr();             //destructor
    
        void insert(Question *);    //insert question
        void remove();      //remove question
        void display();     //display all
        void displayP();    //display parallel programming questions
        void displayD();    //display data structures questions
        void displayS();    //display sorting questions
        void retrieve();    //display single question
        void removeAll();   //remove all nodes
        void changeCat(Question *); //change question category

    private:
        List * dll;        //array of lists
        int size;           //size of array

        void display(int);  //display array recursive
        void removeAll(int);    //remove all recursive
};

