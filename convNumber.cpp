#include "convNumber.h"

using namespace AdvancedConsole;

/************************
Decimal Conversion System
************************/

//Decimal to Binary Conversion Function
void convNumber::decBinary(int decimal){
	int arrayBi[256], x = 0, y, z = decimal, b = 0, n0 = 0;
	while (true) {
		arrayBi[x] = z % 2;
		z /= 2;
		if (arrayBi[x] == 0) n0++;
		else n0--;
		if (n0 == 16) break;
		x++;
	}
	std::cout << Color(AC_GREEN) << "Binary: " << Color(AC_WHITE, AC_BOLD);
	for (y = x - 1; y >= 0; y--) {
		if (arrayBi[y] == 1 || b != 0) {
			std::cout << arrayBi[y];
			b++;
		}
	}
	std::cout << std::endl;
}
//Decimal To Hex Conversion Function
void convNumber::decHex(int decimal) {
	int arrayHexInt[256], x = 0, y, z = decimal, b = 0, n0 = 0;
	while (true) {
		arrayHexInt[x] = z % 16;
		z /= 16;
		if (arrayHexInt[x] == 0) n0++;
		else n0--;
		if (n0 == 16) break;
		x++;
	}
	std::cout << Color(AC_GREEN) << "Hex: " << Color(AC_WHITE, AC_BOLD);
	for (y = x - 1; y >= 0; y--) {
		if (arrayHexInt[y] != 0 || b != 0) {
			switch (arrayHexInt[y]) {
			case 10:
				arrayHexInt[y] = 0xA;
				std::cout << std::hex << std::uppercase << arrayHexInt[y];
				b++;
				break;
			case 11:
				arrayHexInt[y] = 0xB;
				std::cout << std::hex << std::uppercase << arrayHexInt[y];
				b++;
				break;
			case 12:
				arrayHexInt[y] = 0xC;
				std::cout << std::hex << std::uppercase << arrayHexInt[y];
				b++;
				break;
			case 13:
				arrayHexInt[y] = 0xD;
				std::cout << std::hex << std::uppercase << arrayHexInt[y];
				b++;
				break;
			case 14:
				arrayHexInt[y] = 0xE;
				std::cout << std::hex << std::uppercase << arrayHexInt[y];
				b++;
				break;
			case 15:
				arrayHexInt[y] = 0xF;
				std::cout << std::hex << std::uppercase << arrayHexInt[y];
				b++;
				break;
			default:
				std::cout << std::uppercase << arrayHexInt[y];
				b++;
			}
			/*std::cout << std::uppercase << std::hex << arrayHexInt[y];
			b++;*/
		}
	}
	std::cout << std::endl;
}
//Decimal to Octal Conversion Function
void convNumber::decOctal(int decimal) {
	int arrayOct[256], x = 0, y, z = decimal, b = 0, n0 = 0;
	while (true) {
		arrayOct[x] = z % 8;
		z /= 8;
		if (arrayOct[x] == 0) n0++;
		else n0--;
		if (n0 == 16) break;
		x++;
	}
	std::cout << Color(AC_GREEN) << "Octal: " << Color(AC_WHITE, AC_BOLD);
	for (y = x - 1; y >= 0; y--) {
		if (arrayOct[y] != 0 || b != 0) {
			std::cout << arrayOct[y];
			b++;
		}
	}
	std::cout << std::endl;
}

/***********************
Binary Conversion System
************************/

/*
Binary to Decimal Conversion Function 
Note if int b == 0 -> print else return
*/
int convNumber::binDecimal(long long binary, int b) { 
	int decimalNumber = 0, i = 0, remaider;
	while (binary != 0)
	{
		remaider = binary % 10;
		binary /= 10;
		decimalNumber += remaider * pow(2, i);
		++i;
	}
	if (b == 1) std::cout << std::dec << Color(AC_GREEN) << "Decimal: "
		<< Color(AC_WHITE, AC_BOLD) << decimalNumber << std::endl;
	else return decimalNumber;
}

/****************************
Hexadecimal Conversion System
****************************/

/*
Hex to Decimal Conversion Function
Note if int b == 0 -> print else return
*/
int convNumber::hexDecimal(char hex[], int b) {
	//Convert char hex array to int decimal array by loop
	int decimal[8] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 }; int totalDec = 0;
	for (int i = 0; 7 >= i; i++) {
		//std::cout << i << std::endl;
		switch (hex[i]) {
		case '0':
			decimal[i] = 0;
			break;
		case '1':
			decimal[i] = 1;
			break;
		case '2':
			decimal[i] = 2;
			break;
		case '3':
			decimal[i] = 3;
			break;
		case '4':
			decimal[i] = 4;
			break;
		case '5':
			decimal[i] = 5;
			break;
		case '6':
			decimal[i] = 6;
			break;
		case '7':
			decimal[i] = 7;
			break;
		case '8':
			decimal[i] = 8;
			break;
		case '9':
			decimal[i] = 9;
			break;
		case 'A':
			decimal[i] = 10;
			break;
		case 'B':
			decimal[i] = 11;
			break;
		case 'C':
			decimal[i] = 12;
			break;
		case 'D':
			decimal[i] = 13;
			break;
		case 'E':
			decimal[i] = 14;
			break;
		case 'F':
			decimal[i] = 15;
			break;
		case 'a':
			decimal[i] = 10;
			break;
		case 'b':
			decimal[i] = 11;
			break;
		case 'c':
			decimal[i] = 12;
			break;
		case 'd':
			decimal[i] = 13;
			break;
		case 'e':
			decimal[i] = 14;
			break;
		case 'f':
			decimal[i] = 15;
			break;
		default:
			decimal[i] = -1;
		}
	}
	int z = 0;
	for (int i = 7; i >= 0; i--) {
		if (decimal[i] != -1) {
			totalDec = totalDec + (decimal[i] * pow(16, z));
			++z;
		}
		//std::cout << decimal[i] << " - " << i << std::endl;
	}
	if (b == 1) std::cout << std::dec << Color(AC_GREEN) << "Decimal: "
		<< Color(AC_WHITE, AC_BOLD) << totalDec << std::endl;
	else return totalDec;
	/*int x = 0, y = 7;
	while (y > 0) {
	std::cout << y;
	if (decimal[y] != -1) {
	totalDec += decimal[y] * pow(16, x);
	++x;
	}
	y--;
	}
	if (b == 1) std::cout << std::dec << Color(AC_GREEN) << "Decimal: "
	<< Color(AC_WHITE, AC_BOLD) << totalDec << std::endl;
	else return totalDec;*/
}

/****************************
Octal Conversion System
****************************/

/*
Octal to Decimal Conversion Function
Note if int b == 0 -> print else return
*/
int convNumber::octDecimal(int octalNumber, int b) {
	int decimalNumber = 0, i = 0, remainder;
	while (octalNumber != 0)
	{
		remainder = octalNumber % 10;
		octalNumber /= 10;
		decimalNumber += remainder * pow(8, i);
		++i;
	}
	if (b == 1) std::cout << std::dec << Color(AC_GREEN) << "Decimal: "
		<< Color(AC_WHITE, AC_BOLD) << decimalNumber << std::endl;
	else return decimalNumber;
}
