// bulls-and-cows.cpp 
// Lisa Jacklin
// CS 201
// 10/6/2021
//requires a vector and the ability for a user to check these values

#include <iostream>
#include <string>
#include <stdlib.h> 
#include <time.h>

#include "bulls-cows.hpp";
using namespace std;


int main() {
    // Generate secret number
    string secret_string = generate_secret_number();
    cout << "Secret number chosen (between 1000 and 9999)." << endl;
 
    cout << "Start guessing!" << endl;

    int nturns = 0;
    while (true) {
        // Input guess number
        string guess_string = get_user_input();
        nturns++;

        // For marking which digits have been "used"
        bool secret_digit_used[4] = { false, false, false, false };
        bool guess_digit_used[4] = { false, false, false, false };

        // Count bulls
        int bulls = count_bulls(secret_string, guess_string, secret_digit_used, guess_digit_used);

        // Check if guess is correct
        if (bulls == 4) {
            cout << "Congratulations, you did it!" << endl;
            cout << "You took " << nturns << " to guess the number" << endl;
            break;
        }

        // Count cows
        int cows = count_cows(secret_string, guess_string, secret_digit_used, guess_digit_used);

        // Output the information
        cout << "Turn " << nturns << ": Your guess " << guess_string << " has " << bulls << " bulls and " << cows << " cows." << endl;
    }

    // Output secret number once game is over
    cout << "Secret number is " << secret_string << endl;

    return 0;
}