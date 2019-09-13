#include<sstream>
#include<iostream>
#include<string>
#include<bits/stdc++.h> 

using namespace std;

class card {

	int grade;
	string name;


	card() {
		grade = 9;
	}
};

int main () {
	int view;
	string name;
	cout << "Welcome to the report card interface!\nSelect 1 to add a student, 2 to view a classes average grade, 3 to view your grades, and 4 to exit.\n";
	cin >> view;
	if (view == 1) {
		cout << "Please enter the full name of the student";
		cin >> 
	} else if (view == 2) {
		cout << "Please select a class from the list:\n";
		cout << "Biology (1) Chemistry (2) Physics (3) Calculus (4) Statistics (5)";
		cin << view; //reusing this variable in each else if rather than declare several variables that would never conflict
		switch(view) {
			case 1: cout << "Biology Average letter grade: " /*do the math with the average percent*/;
					cout << "Biology Average letter grade: " /*do the math with the average percent*/;
					break;
			//TODO repeat for all cases
			default: cout << "Class not found";
		}
	} else if (view == 3) {
		cout << "What is your student ID?";
		cin >> view;
		//TODO Access the database using the ID
	} else {
		cout << "Goodbye" << endl;
		return 0;
	}
}