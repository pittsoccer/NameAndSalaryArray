
/*
  - 08-25-25
  - Write a program that creates 2 arrays to store a name and a salary.
        - Write a function that fills the array.
        - Write a function that prints the array.
*/

#include <iostream>
#include <string>
using namespace std;

// constants
const int MAX = 10;

// FillArrays function
void FillArrays(string n[], double s[], int& size);

// PrintArrays function
void PrintArrays(string n[], double s[], int size);

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

int main() {
    string names[MAX]; // name array
    double salaries[MAX]; // salary array
    int size = 0;

    // FillArrays function
    FillArrays(names, salaries, size);

    // output break
    cout << endl;

    // PrintArrays function
    PrintArrays(names, salaries, size);

return 0;
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

// FillArrays function
void FillArrays(string n[], double s[], int& size) {
    size = rand() % MAX + 1;
    
    for (int i = 0; i < size; i++) {
        // input name
        cout << "Enter a name: ";
        cin >> n[i];
        // input salary
        cout << "Enter a salary: ";
        cin >> s[i];
    }
}

// PrintArrays function
void PrintArrays(string n[], double s[], int size) {
    for (int i = 0; i < size; i++) {
        // output name
        cout << "Name: " << n[i] << endl;
        // output salary
        cout << "Salary: " << s[i] << endl;
        // output breaK
        cout << endl;
    }
}
