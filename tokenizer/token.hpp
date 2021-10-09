// token.hpp
// Lisa Jacklin
// CS 201
// 10/8/2021
//

#ifndef TOKEN_HPP
#define TOKEN_HPP

#include <iostream>
#include <vector>


bool ReadLine(std::string& str);
//use std::getlin();

unsigned StringToTokensWS(const std::string& input, std::vector<std::string>& tokens);
//uses std::istringstream

void AnalyzeTokens(const std::vector<std::string>& tokens);
//should print out the type of token and the token itself surrounded by quotation marks

//if end is entered the porgram should stop inputting data

#endif