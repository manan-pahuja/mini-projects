#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    int num1;
    int num2;
    string operation;
    bool calculation = true;
    while (calculation) {

        cout << "\tEnter the operation(+,-,*,/,%,pow,sqrt,exit) : ";
        cin >> operation;
        if (operation == "exit") {
            calculation = false;
            break;
        }
        cout << "Enter the number: ";
        cin >> num1;
        cout << "\nEnter another number: ";
        cin >> num2;
    }
    return 0;
}