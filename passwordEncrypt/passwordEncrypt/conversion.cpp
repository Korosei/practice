#include "conversion.h"

Conversion::Conversion() {
	char encryptKey = 'a';
	for (int i = 0; i < 10; i++) {
		encryption[i] = encryptKey;
		encryptKey++;
	}
}