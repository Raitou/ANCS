#include "stdafx.h"
void decOctal(int decimal) {
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