#include "stdafx.h"
void decBinary(int decimal) {
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
		if (arrayBi[y] == 1 || b != 0){
			std::cout << arrayBi[y];
			b++;
		}
	}
	std::cout << std::endl;
}