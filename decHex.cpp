#include "stdafx.h"
void decHex(int decimal) {
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