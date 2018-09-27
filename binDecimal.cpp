#include "stdafx.h"
int binDecimal(long long binary, int b){
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