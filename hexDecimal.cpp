#include "stdafx.h"
int hexDecimal(char hex[], int b) {
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