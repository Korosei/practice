#include "conversion.h"

Conversion::Conversion() {
	char encryptKey = 'a';
	for (int i = 0; i < 10; i++) {
		encryption.insert({ i, encryptKey++ });
	}
	

	int decryptKey = 0;
	for (char dec = 'a'; dec != 'k'; dec++) {
		decryption.insert({ dec, decryptKey++ });
	}
}

string Conversion::encrypt(int password) {
	string encryptedP = "";
	int isolate = password / 10;
	int isoRem = password % 10;
	
	while (isolate > 0) { // isolate / 10 == 0
		encryptedP += encryption[isoRem];
		isoRem = isolate % 10;
		isolate = isolate / 10;		
	}
	encryptedP += encryption[isoRem];
	reverse(encryptedP.begin(), encryptedP.end());
	return encryptedP;
}

int Conversion::decrypt(string encryptedP) {
	int password = 0;
	string temp = "";
	for (auto& it : encryptedP) {
		temp += to_string(decryption[it]);;
	}

	return stoi(temp);
}

void Conversion::print() {
	cout << "\n";
	for (int i = 0; i < encryption.size(); i++) {
		cout << encryption[i];
	}
	cout << "\n";
}