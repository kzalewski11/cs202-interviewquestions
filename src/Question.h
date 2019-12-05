//Question.h
//Question class interface

#include <iostream>
#include <cstring>
#include <typeinfo>

using namespace std;

class Question
{
    public:
        Question();             //default constructor
        Question(const Question &); //copy constructor
        virtual ~Question();    //destructor

        void edit(char *);       //edit text of question

        virtual void display() = 0;         //display question

    protected:
        int difficulty;         //question difficulty level
        char * info;            //information about question
        char * structures;      //data structures best suited
};

class ParallelPrg: public Question
{
    public:
        ParallelPrg();          //default constructor
        ParallelPrg(char * q, int diff);  //constructor with arg

        void display();         //display question

    private:
        int expectedThreads;    //number of threads expected
};

class DataStrs: public Question
{
    public:
        DataStrs();             //default constructor
        DataStrs(char * q, int diff);  //constructor with arg

        void display();          //display question

    private:
};

class Sorting: public Question
{
    public:
        Sorting();              //default constructor
        Sorting(char * q, int diff);  //constructor with arg

        void display();         //display question

    private:
};
