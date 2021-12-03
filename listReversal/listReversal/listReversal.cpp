#include "listReversal.h"

listReversal::listReversal() {
	srand(time(0));
	
	for (int i = 0; i < 10; i++) {
		toReverse.push_back(rand() % 10 + 1);
	}
}

list<int> listReversal::stackReverse() {
	list<int>::iterator it;
	stack<int> reverse;
	list<int> rL;

	printList(toReverse);
	auto start = high_resolution_clock::now();
	for (it = toReverse.begin(); it != toReverse.end(); it++) {
		reverse.push(*it);
	}

	while (!reverse.empty()) {
		rL.push_back(reverse.top());
		reverse.pop();
	}

	auto stop = high_resolution_clock::now();

	auto duration = duration_cast<microseconds>(stop - start);

	cout << endl << "Function took " << duration.count() << " microseconds." << endl;
	printList(rL);
	return rL;
}

void listReversal::printList(list<int> li) {
	auto start = high_resolution_clock::now();
	for (auto& it : li) {
		cout << it;
	}
}