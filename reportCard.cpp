#include<bits/stdc++.h>

using namespace std;

class card {
    int grade;
    string name;
    list<string> classes;
    
    void card() {
        grade = 9;
        classes = {"Geometry", "World History", "Spanish", "English", "Biology"};
        name = "Student";
    }
    void card(int g, string n, list<string> c) {
        grade = g;
        name = n;
        classes = c;
    }
    
};



int main () {
    int input;
    string name;
    cout << "Welcome to the report card interface!\nSelect 1 to add a student, 2 to view a classes average grade, 3 to view your grades, and 4 to exit.\n";
    cin >> input;
    if (input == 1) {
        cout << "Please enter the full name of the student";
        getline(cin,name);
    } else if (input == 2) {
        cout << "Please select a class from the list:\n";
        cout << "Biology (1) Chemistry (2) Physics (3) Calculus (4) Statistics (5)";
        cin >> input; //reusing this variable in each else if rather than declare several variables that would never conflict
        switch(input) {
            case 1: cout << "Biology Average letter grade: " /*do the math with the average percent*/;
                cout << "Biology Average letter grade: " /*do the math with the average percent*/;
                break;
                //TODO repeat for all cases
            default: cout << "Class not found";
        }
    } else if (input == 3) {
        cout << "What is your student ID?";
        cin >> input;
        //TODO Access the database using the ID
    } else {
        cout << "Goodbye" << endl;
        return 0;
    }
}
