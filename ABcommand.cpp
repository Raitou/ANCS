#include "stdafx.h"

void command(char c[]) {
	int num; char com[64];
	/*Decimal Conversion System*/
	if (strcmp(c, "-d2b") == 0) {
		std::cin >> num;
		std::cout << std::endl;
		decBinary(num);
	}else if (strcmp(c, "-d2h") == 0) {
		std::cin >> num;
		std::cout << std::endl;
		decHex(num);
	}else if (strcmp(c, "-d2o") == 0) {
		std::cin >> num;
		std::cout << std::endl;
		decOctal(num);
	}else if (strcmp(c, "-d2a") == 0) {
		std::cin >> num;
		std::cout << std::endl;
		decBinary(num);
		decHex(num);
		decOctal(num);
	}
	/*Binary Conversion System************
	Notes: If 2nd arguement is 1 = Print
							   0 = Return
	*************************************/
	else if (strcmp(c, "-b2d") == 0) {
		std::cin >> num;
		std::cout << std::endl;
		binDecimal(num, 1);				//Cout Function
	}else if (strcmp(c, "-b2h") == 0) {
		std::cin >> num;
		std::cout << std::endl;
		decHex(binDecimal(num, 0));		//Return Converted Number
	}else if (strcmp(c, "-b2o") == 0) {
		std::cin >> num;
		std::cout << std::endl;
		decOctal(binDecimal(num, 0));	//Return Converted Number
	}else if (strcmp(c, "-b2a") == 0) {
		std::cin >> num;
		std::cout << std::endl;
		binDecimal(num, 1);				//Cout Function
		decHex(binDecimal(num, 0));		//Return Converted Number
		decOctal(binDecimal(num, 0));	//Return Converted Number
	}
	/*Octal Conversion System**************
	Notes: If 2nd arguement is 1 = Print
							   0 = Return
	***************************************/
	else if (strcmp(c, "-o2b") == 0) {
		std::cin >> num;
		std::cout << std::endl;
		decBinary(octDecimal(num, 0)); //Return Converted Value of Num
	}else if (strcmp(c, "-o2d") == 0) {
		std::cin >> num;
		std::cout << std::endl;
		octDecimal(num, 1);			   //Cout function
	}else if (strcmp(c, "-o2h") == 0) {
		std::cin >> num;
		std::cout << std::endl;
		decHex(octDecimal(num, 0));	   //Return Converted Value of Num
	}else if (strcmp(c, "-o2a") == 0) {
		std::cin >> num;
		std::cout << std::endl;
		octDecimal(num, 1);			   //Cout Function
		decBinary(octDecimal(num, 0)); //Return Converted Value of Num
		decHex(octDecimal(num, 0));    //Return Converted Value of Num
	}
	/*Hexadecimal Conversion System*******
	Notes: If 2nd arguement is 1 = Print
							   0 = Return
	**************************************/
	else if (strcmp(c, "-h2b") == 0) {
		std::cin >> com;
		std::cout << std::endl;
		decBinary(hexDecimal(com, 0));	//Return Converted Value of Num
	}else if (strcmp(c, "-h2d") == 0) {
		std::cin >> com;
		std::cout << std::endl;
		hexDecimal(com, 1);				//Cout function
	}else if (strcmp(c, "-h2o") == 0) {
		std::cin >> com;
		std::cout << std::endl;
		decOctal(hexDecimal(com, 0));	//Return Converted Vaue of Num
	}else if (strcmp(c, "-h2a") == 0) {
		std::cin >> com;
		std::cout << std::endl;
		hexDecimal(com, 1);				//Cout function
		decBinary(hexDecimal(com, 0));	//Return value
		decOctal(hexDecimal(com, 0));	//Return value
	}
	/*Command Line Help*/
	else if (strcmp(c, "-help") == 0) {
		std::cout << Color(AC_YELLOW, AC_NORMAL) << "\n             [COMMANDS]\n\n" << " - GENERAL -\n\n"
			<< Color(AC_DEFAULT, AC_BOLD) << " -help  :" << Color(AC_YELLOW, AC_NORMAL)
			<< "To show this help command.\n"
			<< Color(AC_DEFAULT, AC_BOLD) << " -clear :" << Color(AC_YELLOW, AC_NORMAL)
			<< "To clear the console window.\n"
			<< Color(AC_DEFAULT, AC_BOLD) << " -exit  :" << Color(AC_YELLOW, AC_NORMAL)
			<< "To exit program.\n"
			<< Color(AC_DEFAULT, AC_BOLD) << " -about :" << Color(AC_YELLOW, AC_NORMAL)
			<< "To show the authors of this program.\n"
			<< Color(AC_DEFAULT, AC_BOLD) << " -home  :" << Color(AC_YELLOW, AC_NORMAL)
			<< "To go back to the homepage of the program.\n\n"

			<< Color(AC_YELLOW, AC_NORMAL) << " - BINARY CONVERSION SYSTEM -\n\n"
			<< Color(AC_DEFAULT, AC_BOLD) << " -b2a <binary> :" << Color(AC_YELLOW, AC_NORMAL)
			<< "To convert binary to all number systems.\n"
			<< Color(AC_DEFAULT, AC_BOLD) << " -b2d <binary> :" << Color(AC_YELLOW, AC_NORMAL)
			<< "To convert binary to decimal.\n"
			<< Color(AC_DEFAULT, AC_BOLD) << " -b2h <binary> :" << Color(AC_YELLOW, AC_NORMAL)
			<< "To convert binary to hex.\n"
			<< Color(AC_DEFAULT, AC_BOLD) << " -b2o <binary> :" << Color(AC_YELLOW, AC_NORMAL)
			<< "To convert binary to octal.\n\n"

			<< Color(AC_YELLOW, AC_NORMAL) << " - DECIMAL CONVERSION SYSTEM -\n\n"
			<< Color(AC_DEFAULT, AC_BOLD) << " -d2a <decimal> :" << Color(AC_YELLOW, AC_NORMAL)
			<< "To convert decimal to all number systems.\n"
			<< Color(AC_DEFAULT, AC_BOLD) << " -d2b <decimal> :" << Color(AC_YELLOW, AC_NORMAL)
			<< "To convert decimal to binary.\n"
			<< Color(AC_DEFAULT, AC_BOLD) << " -d2h <decimal> :" << Color(AC_YELLOW, AC_NORMAL)
			<< "To convert decimal to hex.\n"
			<< Color(AC_DEFAULT, AC_BOLD) << " -d2o <decimal> :" << Color(AC_YELLOW, AC_NORMAL)
			<< "To convert decimal to octal.\n\n"

			<< Color(AC_YELLOW, AC_NORMAL) << " - OCTAL CONVERSION SYSTEM -\n\n"
			<< Color(AC_DEFAULT, AC_BOLD) << " -o2a <octal> :" << Color(AC_YELLOW, AC_NORMAL)
			<< "To convert octal to all number systems.\n"
			<< Color(AC_DEFAULT, AC_BOLD) << " -o2b <octal> :" << Color(AC_YELLOW, AC_NORMAL)
			<< "To convert octal to binary.\n"
			<< Color(AC_DEFAULT, AC_BOLD) << " -o2d <octal> :" << Color(AC_YELLOW, AC_NORMAL)
			<< "To convert octal to decimal.\n"
			<< Color(AC_DEFAULT, AC_BOLD) << " -o2h <octal> :" << Color(AC_YELLOW, AC_NORMAL)
			<< "To convert octal to hex.\n\n"

			<< Color(AC_YELLOW, AC_NORMAL) << " - HEX CONVERSION SYSTEM -\n\n"
			<< Color(AC_DEFAULT, AC_BOLD) << " -h2a <hex> :" << Color(AC_YELLOW, AC_NORMAL)
			<< "To convert hex to all number systems.\n"
			<< Color(AC_DEFAULT, AC_BOLD) << " -h2b <hex> :" << Color(AC_YELLOW, AC_NORMAL)
			<< "To convert hex to binary.\n"
			<< Color(AC_DEFAULT, AC_BOLD) << " -h2d <hex> :" << Color(AC_YELLOW, AC_NORMAL)
			<< "To convert hex to decimal.\n"
			<< Color(AC_DEFAULT, AC_BOLD) << " -h2o <hex> :" << Color(AC_YELLOW, AC_NORMAL)
			<< "To convert hex to octal.\n\n";

		std::cout << Color(AC_MAGENTA, AC_NORMAL) << ">> " << Color(AC_DEFAULT);
		std::cin >> com;
		command(com);
	}
	else if (strcmp(c, "-about") == 0) {
		std::cout << Color(AC_YELLOW, AC_NORMAL) << "\n             [ABOUT]\n\n" 
			<< " - THE PURPOSE OF THIS PROGRAM -\n\n"
			<< Color(AC_YELLOW, AC_NORMAL)
			<< " To convert all number systems to another form.\n\n"
			<< " - THE CREATORS OF THIS PROGRAM -\n\n"
			<< Color(AC_DEFAULT, AC_BOLD) << " John Kenneth Andales  :" << Color(AC_YELLOW, AC_NORMAL)
			<< "Compile and create the core system and functions.\n"
			<< Color(AC_DEFAULT, AC_BOLD) << " Vince Legarte         :" << Color(AC_YELLOW, AC_NORMAL)
			<< "Create the Hex Conversion System.\n"
			<< Color(AC_DEFAULT, AC_BOLD) << " Aljan Porquillo       :" << Color(AC_YELLOW, AC_NORMAL)
			<< "Create the Binary Conversion System.\n"
			<< Color(AC_DEFAULT, AC_BOLD) << " Seyedali Nikabulin    :" << Color(AC_YELLOW, AC_NORMAL)
			<< "Create the Octal Conversion System.\n\n";
	}
	else if (strcmp(c, "-clear") == 0) {
		std::cout << Color(AC_RED, AC_BOLD) << "\n Clearing Console Window...";
		Sleep(1000);
		system("CLS");
		std::cout << Color(AC_CYAN, AC_BOLD) << " Window Cleared...\n";
		std::cout << Color(AC_MAGENTA, AC_NORMAL) << "\n>> " << Color(AC_DEFAULT, AC_NORMAL);
		std::cin >> com;
		command(com);
	}else if (strcmp(c, "-exit") == 0) {
		std::cout << Color(AC_RED, AC_BOLD) << "\n Exiting Process...";
		Sleep(1000);
		ExitProcess(0);
	}else if (strcmp(c, "-home") == 0) {
		std::cout << Color(AC_RED, AC_BOLD) << "\n Going back to home...";
		Sleep(1000);
		system("CLS");
		home();
	}else {
		std::cout << Color(AC_RED, AC_BOLD) << "\nERROR! Unknown Command." 
			<< Color(AC_GREEN, AC_NORMAL) << "\nType \"-help\" to show all available commands.\n\n";
		std::cout << Color(AC_MAGENTA, AC_NORMAL) << ">> " << Color(AC_DEFAULT);
		std::cin >> com;
		command(com);
	}
	std::cout << Color(AC_MAGENTA, AC_NORMAL) << "\n>> " << Color(AC_DEFAULT, AC_NORMAL);
	std::cin >> com;
	command(com);
}