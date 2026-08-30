#include <iostream>
#include <random>
using namespace std;

int main() {
    cout << "\t\tWELCOME TO NUMBER GUESSING GAME\n" << "\nInstructions:-\nComputer will guess a number from 1 to 100 \nYou have to guess the number in 10 chances\nyou will be getting hint after the guess\n\n";
    
    bool playing = true;
    while (playing) {
        for(int guess = 10; guess > 0; --guess) {
        cout << "guesses left:" << guess;
        }
    }
    return 0;
}