//container-test.cpp
//Lisa Jacklin
//CS 201
//10/8/2021

#include <iostream>
#include <vector>
using namespace std;

//Shared Functionality
bool IsContainerEmpty(const vector<string>& container);
void PrintContainer(const vector<string>& container);

//Implememnt these two tests to verify your functions work 
//with at least the sequence:
//push "A', push "B", push "c', push "d"
// pop , pop, pop, pop
bool TestFifo();
bool TestLifo();