//fifo.cpp
//Lisa Jacklin
//CS 201
//10/8/2021

#include <iostream>
#include <vector>
using namespace std;

//First-in First-Out
void FifoPush(vector<string>& container, const string& item) {

	container.push_back("A");
	container.push_back("C");

	vector< string >::iterator it = container.begin() + 1;
	container.insert(it, "B");

	for (size_t n = 0; n < container.size(); ++n)
		cout << container[n] << endl;

}

void FifoPop(vector<string>& container, string& item) {

}
