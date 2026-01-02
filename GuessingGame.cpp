#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int num, guess;
    srand(time(0));
    num = rand() % 50 + 1;

    cout << "Guess the number (1 to 50): ";

    do {
        cin >> guess;

        if(guess > num)
            cout << "Lower\n";
        else if(guess < num)
            cout << "Higher\n";
        else
            cout << "Congratulations! You guessed it.\n";
    } while (guess != num);

    return 0;
}