#pragma once
#include <unordered_map>
#include <string>

using namespace std;

class Conversion {
private:
	std::unordered_map<char, int> encryption;

public:
	Conversion();
	string encrypt(int password);
	int decrypt(string encPassword);
	void print();
};
