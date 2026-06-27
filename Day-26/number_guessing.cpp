#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    int secretNumber = rand() % 100 + 1; 
    int guess;
    int attempts = 0;
    const int maxAttempts = 7;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "Guess a number between 1 and 100." << endl;

    while (attempts < maxAttempts) {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else if (guess > secretNumber) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the number in " << attempts << " attempts." << endl;
            return 0;
        }
    }

    cout << "Sorry, you ran out of attempts. The number was " << secretNumber << "." << endl;
    return 0;
}   