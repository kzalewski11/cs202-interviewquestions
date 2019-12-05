//Question.cpp
//Question implementation file

#include "Question.h"

//question default constructor
Question::Question(): difficulty{0}, info{nullptr}
{}

//question copy constructor
Question::Question(const Question & q)
{
    info = new char[strlen(q.info) + 1];
    structures = new char[strlen(q.structures) + 1];
    strcpy(info, q.info);
    strcpy(structures, q.structures);
    difficulty = q.difficulty;
}

//question destructor
Question::~Question()
{
    difficulty = 0;
    delete info;
    delete structures;
}

//edit question text
void Question::edit(char * c)
{
    delete info;
    info = new char[strlen(c) + 1];
    strcpy(info, c);
}

//ParallelPrg constructor with args
ParallelPrg::ParallelPrg(char * q, int diff)
{
    info = new char[strlen(q) + 1];
    difficulty = diff;
    strcpy(info, q);

    structures = NULL;
    expectedThreads = 10;
}

//ParallelPrg display
void ParallelPrg::display()
{
    cout << "Question on Parallel Programming\n";
    cout << "________________________________\n";
    cout << info << endl;
    cout << "Expected Threads: " << expectedThreads << endl << endl;
}

//DataStrs constructor with args
DataStrs::DataStrs(char * q, int diff)
{
    info = new char[strlen(q) + 1];
    difficulty = diff;
    strcpy(info, q);
    structures = NULL;
}

//DataStrs display
void DataStrs::display()
{
    cout << "Question on Data Structures\n";
    cout << "___________________________\n";
    cout << info << endl << endl;
}

//Sorting constructor with args
Sorting::Sorting(char * q, int diff)
{
    info = new char[strlen(q) + 1];
    difficulty = diff;
    strcpy(info, q);
    structures = NULL;
}

//Sorting display
void Sorting::display()
{
    cout << "Question on Sorting\n";
    cout << "___________________\n";
    cout << info << endl << endl;
}
