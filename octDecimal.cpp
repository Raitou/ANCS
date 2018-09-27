#include "stdafx.h"
int octDecimal(int octalNumber, int b) {
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