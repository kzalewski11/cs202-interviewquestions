//main.cpp

#include "Arr.h"

int main()
{
    //create array with 3 categories
    Arr * a = new Arr(3);

    //create question text
    char * c1 = new char[100];
    strcpy(c1, "Please define parallel programming");
    char * c2 = new char[100];
    strcpy(c2, "Which data structure is typically made using only next pointers?");
    char * c3 = new char[100];
    strcpy(c3, "Which big O notation is considered most efficient?");

    char * c4 = new char[100];
    strcpy(c4, "What effect does parallel programming have on processing speed in the best case");
    char * c5 = new char[100];
    strcpy(c5, "Which data structure typically has both a head and tail pointer?");
    char * c6 = new char[100];
    strcpy(c6, "Which big O notation is considered least efficient?");

    //create questions with difficulty rating
    Question * q1 = new ParallelPrg(c1, 2);
    Question * q2 = new DataStrs(c2, 3);
    Question * q3 = new Sorting(c3, 2);
    Question * q4 = new ParallelPrg(c4, 5);
    Question * q5 = new DataStrs(c5, 1);
    Question * q6 = new Sorting(c6, 2);

    //insert questions into array
    a->insert(q1);
    a->insert(q2);
    a->insert(q3);
    a->insert(q4);
    a->insert(q5);
    a->insert(q6);
    
    //display all questions
    cout << "Displaying all questions in catalog:\n";
    a->display();
    cout << endl;

    //display only parallel programming questions
    cout << "Displaying only parallel programming questions:\n";
    a->displayP();

    

    //delete tests
    delete c1;
    delete c2;
    delete c3;
    delete c4;
    delete c5;
    delete c6;
    delete q1;
    delete q2;
    delete q3;
    delete q4;
    delete q5;
    delete q6;
    delete a;

    //return from main
    return 0;
}
