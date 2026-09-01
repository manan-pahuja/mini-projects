#include <iostream>
#include <random>
using namespace std;

int main() {
    cout << "\t\tWELCOME TO NUMBER GUESSING GAME\n" << "\nInstructions:-\nComputer will guess a number from 1 to 100 \nYou have to guess the number in 10 chances\nyou will be getting hint after the guess\n\n";
    int guess;
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distrib(1, 100);
    bool playing = true;
    while (playing) {
        int secret = distrib(gen);
        for(int guesses = 10; guesses > 0; --guesses) {
            cout << "guesses left:" << guesses;
            if (guess == secret) {
                cout << "\n\n\t\tYOU WON!! ";
            }
            else if (guess > secret) {
                cout << "too high\n";
            }
            else if (guess < secret) {
                cout << "too low\n";
            }
        }
        char choice;
        cout << "\nWould you like to play another turn yes(y) no(n); "
        cin >> choice;
        if (choice == "y") {
            continue;
        }
        else if (choice == " n") {
            cout << "Thank you! for playing";
            return 0;
        
        }
        
    }
    return 0;
}
