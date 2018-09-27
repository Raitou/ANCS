#pragma once

#include <iostream>
#include <cmath>
#include "advconsole.h"


class convNumber{
	public:
		//Decimal Conversion
		void decBinary(int decimal);
		void decHex(int decimal);
		void decOctal(int decimal);

		//Binary Conversion
		int binDecimal(long long binary, int b);

		//Hex Conversion
		int hexDecimal(char hex[], int b);

		//Octal Conversion
		int octDecimal(int octalNumber, int b);

	private:
		int decimal;
		int octalNumber;
		long long binary;

};