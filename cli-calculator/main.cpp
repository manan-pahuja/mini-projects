#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    double num1;
    double num2;
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
        if (operation != "sqrt") {
      
            cout << "\nEnter another number: ";
            cin >> num2;
        }
        if (operation == "+") {
            cout << num1 + num2 << endl;
        
        }
        else if (operation == "-") {
            cout << num1 - num2 << endl;
        }
        else if (operation == "*") {
            cout << num1 * num2 << endl;
        }
        else if (operation == "/") {
            cout << num1 / num2 << endl;
        }
        else if (operation == "%") {
            double remainder = fmod(num1, num2); 
            cout << remainder << endl;
        }
        else if (operation == "pow") {
            double pow1 = pow(num1, num2); 
            cout << pow1 << endl;
        }
        else if (operation == "sqrt") {
            double sqrt1 = sqrt(num1); 
            cout << sqrt1 << endl;
        }
    }
    return 0;
}