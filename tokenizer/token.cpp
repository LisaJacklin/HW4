// token.cpp 
// Lisa Jacklin
// CS 201
// 10/8/2021
//

#include <iostream>
#include <vector>

#include "token.hpp"



bool ReadLine(std::string& str) {

	std::string word;
	std::cout << "please enter a string:";
	std::cin >> word;

	if (true) {
		std::cout << word;
		return true;
	}
	else {
		return false;
	}

}


unsigned StringToTokensWS(const std::string& input, std::vector<std::string>& tokens) {
	std::cout << "numbers of tokens: ";
	
	return tokens.size();
}

//had serious problems determining what to do here...
void AnalyzeTokens(const std::vector<std::string>& tokens) {

}