/*Write a C++ program that asks the user to guess a number between 1 and 100. The
program should provide hints if the guess is too high or too low. Use loops to allow
the user multiple attempts.
*/
#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()

using namespace std;

int main() {
    int secretNumber, guess;
    
    // Seed random number generator
    srand(time(0));
    secretNumber = rand() % 100 + 1; // Random number between 1 and 100

    cout << "Guess the number (between 1 and 100): ";

    while (true) {
        cin >> guess;

        if (guess < 1 || guess > 100) {
            cout << "Please enter a number between 1 and 100." << endl;
            continue;
        }

        if (guess < secretNumber) {
            cout << "Too low! Try again: ";
        } else if (guess > secretNumber) {
            cout << "Too high! Try again: ";
        } else {
            cout << "Congratulations! You guessed the correct number: " << secretNumber << endl;
            break;
        }
    }

    return 0;
}