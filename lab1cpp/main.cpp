#include <iostream>
using namespace std;

int main() {
    //first question

    string name;
    int stdID;
    cout << "What is your name? " << endl;
    cin >> name;
    cout << "Hello " << name;
    cout << "\nWhat is your student ID? " << endl;
    cin >> stdID;
    cout << "Your ID is " << stdID << endl;

    //second question

    int var1;
    int var2;
    int sum;
    int dif;
    int prod;

    cout << "Enter first value: " << endl;
    cin >> var1;
    cout << "Enter second value: " << endl;
    cin >> var2;
    sum = var1 + var2;
    dif = var1 - var2;
    prod = var1 * var2;

    cout << "First value is: " << var1 << "\nSecond value is: " << var2 << "\nSum is: " << sum << "\nDif is: " << dif
         << "\nProd is: " << prod << endl;

    //third question

    int lab;
    int midterm;
    int final;
    cout << "Enter student name: " << endl;
    cin >> name;
    cout << "Enter lab score: " << endl;
    cin >> lab;
    cout << "Enter midterm score: " << endl;
    cin >> midterm;
    cout << "Enter final score: " << endl;
    cin >> final;
    double lastScore = lab * 0.25 + midterm * 0.35 + final * 0.4;
    cout << "Name: " << name;
    cout << "\nLab: " << lab;
    cout << "\nMidterm: " << midterm;
    cout << "\nFinal: " << final;
    cout << "\nLast Score: " << lastScore << endl;

    //forth question

    cout << "*\n**\n***\n**\n*";

    return 0;
}
