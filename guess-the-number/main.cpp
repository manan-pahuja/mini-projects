#include <iostream>
#include <random>
using namespace std;

int main() {
    cout << "\t\tWELCOME TO NUMBER GUESSING GAME\n" 
         << "\nInstructions:-\n"
         << "I will choose a number from 1 to 100.\n" 
         << "You have to guess the number in 10 chances.\n"
         << "You will get hints after each guess!\n\n";

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distrib(1, 100);
    bool playing = true;

    while (playing) {
        int secret = distrib(gen);
        int guess = 0;
        bool won = false;

        for (int guesses = 10; guesses > 0; --guesses) {
            cout << "\nGuesses left: " << guesses << ". Enter your guess: ";
            cin >> guess; // Added the missing input statement

            if (guess == secret) {
                cout << "\n\t\tYOU WON!! You guessed the right number!\n";
                won = true;
                break; 
            }
            else if (guess > secret) {
                cout << "Too high!\n";
            }
            else {
                cout << "Too low!\n";
            }
        }

        // Handle case where player runs out of guesses
        if (!won) {
            cout << "\n\t\tGAME OVER! You ran out of guesses. The secret number was " << secret << ".\n";
        }

        char choice;
        cout << "\nWould you like to play another turn? yes(y) / no(n): ";
        cin >> choice;

        if (choice == 'y' || choice == 'Y') {
            continue;
        }
        else {
            cout << "Thank you for playing!\n";
            break;
        }
    }
    return 0;
}
