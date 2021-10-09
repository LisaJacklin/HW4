//bulls-cows.cpp
//Lisa Jacklin
//CS 201
//10/8/2021

#ifndef BULLS_COWS_HPP
#define BULLS_COWS_HPP

std::string generate_secret_number();

std::string get_user_input();

int count_bulls(std::string secret_string, std::string guess_string, bool secret_digit_used[], bool guess_digit_used[]);

int count_cows(std::string secret_string, std::string guess_string, bool secret_digit_used[], bool guess_digit_used[]);

#endif