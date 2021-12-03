#pragma once

#include <iostream>
#include <stack>
#include <list>
#include <stdlib.h>
#include <time.h>
#include <chrono>


using namespace std;
using namespace std::chrono;

class listReversal {
private: 
	list<int> toReverse;
public: 
	listReversal();
	list<int> stackReverse();
	list<int> stringReverse(list<int> toReverse);
	void printList(list<int> li);
};
