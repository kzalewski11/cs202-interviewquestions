//Arr.cpp
//Arr implementation file

#include "Arr.h"

//default constructor
Arr::Arr(): dll{nullptr}, size{0}
{}

//constructor with size arg
Arr::Arr(int n)
{
    //adjust size of array according to arg
    dll = new List[n];
    size = n;
}

//copy constructor
Arr::Arr(const Arr &a)
{
    
}

//destructor
Arr::~Arr()
{
    removeAll();
    size = 0;
}

//insert question
void Arr::insert(Question * question)
{
    if(typeid(*question) == typeid(ParallelPrg))
        dll[0].insert(question);
    if(typeid(*question) == typeid(DataStrs))
        dll[1].insert(question);
    if(typeid(*question) == typeid(Sorting))
        dll[2].insert(question);
}

//display array
void Arr::display()
{
    //if array is empty
    if(size == 0)
        return;

    //if array only has one list
    if(size == 1)
        dll[0].display();

    //if array has more than one list
    display(0);
}

//display parallel programming questions
void Arr::displayP()
{
    dll[0].display();
}

//display data structures questions
void Arr::displayD()
{
    dll[1].display();
}

//display sorting questions
void Arr::displayS()
{
    dll[2].display();
}

//display array recursive
void Arr::display(int index)
{
    //base case
    if(index == size)
        return;

    dll[index].display();
    display(++index);
}

//remove all lists
void Arr::removeAll()
{
    //if array is empty
    if(!dll)
        return;

    //if array has only one element
    if(size == 1)
        delete dll;
    
    //if array has more than one element
    removeAll(0);
}

//remove all recursive
void Arr::removeAll(int index)
{
    //base case
    if(index == size)
        return;

    dll[index].removeAll();
    removeAll(++index);
}

//change question category
void Arr::changeCat(Question * q)
{
    //change to Parallel Programming
    dynamic_cast<ParallelPrg*>(q);
    
    //change to Data Structures
    dynamic_cast<DataStrs*>(q);

    //change to sorting
    dynamic_cast<Sorting*>(q);

    insert(q);
}
