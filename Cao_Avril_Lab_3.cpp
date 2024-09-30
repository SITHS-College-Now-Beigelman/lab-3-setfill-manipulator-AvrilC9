// Avril Cao
// Lab 3
// Septemer 30, 2024

#include <iostream>
#include <iomanip>
// #include <iostream> allows cout to generate output and endl

using namespace std;
// using namespace std; allowa cout and endl to be used without the prefix std::

int main()
// the function main is needed in all C++ programs

{
// I used cout to put in the output and I put endl; in the end when starting a next line

    cout << setfill('#');
    cout << setw(1) << "#" << setw(86) << "#" << endl;

// I used setfill to fill the blank spaces with '#'

    cout << setfill(' ');
    cout << setw(1) << "#" << setw(86) << "#" << endl; 

// I used setfill to fill the blank spaces with ' '

    cout << setfill(' ');
    cout << setw(1) << "#" << setw(59) << "Ways to access the Task Manager on your Windows computer:" << setw(27) << "#" << endl; 

// I used setw to put my text in a specific column 

    cout << setfill(' ');
    cout << setw(1) << "#" << setw(86) << "#" << endl; 

    cout << setfill(' ');
    cout << setw(1) << "#" << setw(57) << "Press the key combination Ctrl + Shift + Escape" << setw(29) << "#" << endl; 

    cout << setfill(' ');
    cout << setw(1) << "#" << setw(86) << "#" << endl; 

    cout << setfill(' ');
    cout << setw(1) << "#" << setw(79) << "Press the key combination Ctrl + Alt + Delete and select Task Manager" << setw(7) << "#" << endl; 

    cout << setfill(' ');
    cout << setw(1) << "#" << setw(86) << "#" << endl; 

    cout << setfill(' ');
    cout << setw(1) << "#" << setw(60) << "Type Task Manager in the Windows Start menu search" << setw(26) << "#" << endl; 

    cout << setfill(' ');
    cout << setw(1) << "#" << setw(86) << "#" << endl; 

    cout << setfill('#');
    cout << setw(1) << "#" << setw(86) << "#" << endl;

    return 0;
}

/* 
#######################################################################################
#                                                                                     #
#  Ways to access the Task Manager on your Windows computer:                          #
#                                                                                     #
#          Press the key combination Ctrl + Shift + Escape                            #
#                                                                                     #
#          Press the key combination Ctrl + Alt + Delete and select Task Manager      #
#                                                                                     #
#          Type Task Manager in the Windows Start menu search                         #
#                                                                                     #
####################################################################################### */