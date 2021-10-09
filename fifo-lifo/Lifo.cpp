//lifo.cpp
//Lisa Jacklin
//CS 201
//10/8/2021


#include <iostream>
#include <vector>
using namespace std;

//Last-In First-Out
void LifoPush(vector<string>& container, const string& item) {

	// the vector should be initiated from the end of container rather than begining
	vector< string >::iterator it = container.end() + 1;
	container.insert(it, item);

	//this should be printing values from the end item in the vector to the last...
	for (size_t n = 0; n < container.size(); ++n)
		cout << container[n] << endl;

}



void LifoPop(vector<string>& container, string& item) {

	container.pop_back();
}
