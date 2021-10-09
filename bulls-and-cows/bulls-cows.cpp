//bulls-cows.cpp
//Lisa Jacklin
//CS 201
//10/8/2021

#include <iostream>
#include <string>
#include <stdlib.h> 
#include <time.h>

#include "bulls-cows.hpp"
using namespace std;

string generate_secret_number() {
    // Generates a 4-digit secret number (between 1000 and 9999)
    srand(time(0));
    int secret_number = rand() % 9000 + 1000;
    return to_string(secret_number);
}

string get_user_input() {
    int guess = 0;
    cin >> guess;

    // Checks if guess is a 4-digit number (between 1000 and 9999)
    while (guess < 1000 || guess > 9999) {
        cout << "Invalid input!" << endl;
        cin >> guess;
    }

    return to_string(guess);
}

int count_bulls(string secret_string, string guess_string, bool secret_digit_used[], bool guess_digit_used[]) {
    int count = 0;

    // Iterate over the 4 digits and count the number of equal digits
    for (int i = 0; i < 4; i++) {
        if (secret_string[i] == guess_string[i]) {
            count++;
            // Mark digits used
            secret_digit_used[i] = true;
            guess_digit_used[i] = true;
        }
    }

    return count;
}

int count_cows(string secret_string, string guess_string, bool secret_digit_used[], bool guess_digit_used[]) {
    int count = 0;

    // Iterate over all possible position pairs and increase count if digits are equal
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            // Don't use an alredy used digit
            if (secret_digit_used[i] || guess_digit_used[j])
                continue;

            if (secret_string[i] == guess_string[j]) {
                count++;
                // Mark digits used
                secret_digit_used[i] = true;
                guess_digit_used[j] = true;
            }
        }
    }

    return count;
}
