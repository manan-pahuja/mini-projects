#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    cout <<  "\t\tWELCOME TO CLI-CALCULATOR\n";
    double num1;
    double num2;
    string operation;
    bool calculation = true;
    while (calculation) {

        cout << "\nEnter the operation(+,-,*,/,%,pow,sqrt,exit) : ";
        cin >> operation;
        if (operation == "exit") {
            calculation = false;
            break;
        }
        cout << "\nEnter the number: ";
        cin >> num1;
        if (operation != "sqrt") {

            cout << "Enter another number: ";
            cin >> num2;
        }
        if (operation == "+") {
            cout << "The output is : " << num1 + num2 << endl;

        }
        else if (operation == "-") {
            cout << "The output is : " << num1 - num2 << endl;
        }
        else if (operation == "*") {
            cout << "The output is : " << num1 * num2 << endl;
        }
        else if (operation == "/") {
            cout << "The output is : " << num1 / num2 << endl;
        }
        else if (operation == "%") {
            double remainder = fmod(num1, num2); 
            cout << "The output is : " << remainder << endl;
        }
        else if (operation == "pow") {
            double pow1 = pow(num1, num2); 
            cout << "The output is : " << pow1 << endl;
        }
        else if (operation == "sqrt") {
            double sqrt1 = sqrt(num1); 
            cout << "The output is : " << sqrt1 << endl;
        }
    }
    return 0;
}