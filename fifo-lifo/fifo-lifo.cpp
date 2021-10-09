// fifo-lifo.cpp 
// Lisa Jacklin
// CS 201
// 10/8/2021
//

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    std::cout << "Hello World!\n";
}


//First-in First-Out
void FifoPush(vector<string>& container, const string& item);
void FifoPop(vector<string>& container, string& item);

//Last-In First-Out
void LifoPush(vecotr<string>& container, const string& item);
void LifoPop(vector<string>& container, string& item);

//Shared Functionality
bool IsContainerEmpty(const vector<string>& container);
void PrintContainer(const vector<string>& container);

//Implememnt these two tests to verify your functions work 
//with at least the sequence:
//push "A', push "B", push "c', push "d"
// pop , pop, pop, pop
bool TestFifo();
bool TestLifo();