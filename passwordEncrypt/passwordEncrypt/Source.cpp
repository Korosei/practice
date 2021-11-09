#include <iostream>
#include <cstdio>
#include "conversion.h"

using namespace std;

int main() {
	int password;
	string encryptedP;
	Conversion enc;

	cout << "Please enter your password: ";
	cin >> password;

	encryptedP = enc.encrypt(password);
	cout << "\nYour encrypted password is: " << encryptedP;
	cout << "\nYour password is: " << enc.decrypt(encryptedP);
}
