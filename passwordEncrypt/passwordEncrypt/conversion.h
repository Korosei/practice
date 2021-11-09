#pragma once
#include <unordered_map>
#include <string>
#include <iostream>

using namespace std;

class Conversion {
private:
	unordered_map<int, char> encryption;
	unordered_map<char, int> decryption;
	string encryptedP;

public:
	Conversion();
	string encrypt(int password);
	int decrypt(string encPassword);
	void print();
};
