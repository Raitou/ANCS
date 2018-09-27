#pragma once
/*Decimal To All Number Systems*/
void decBinary(int decimal);
void decOctal(int decimal);
void decHex(int decimal);

/*Binary to All Number Systems*/
int binDecimal(long long binary, int b);
void binOctal(long long a);
void binHex(long long a);

/*Octal to All Number Systems*/
int octDecimal(int octalNumber, int b);
void octBinary(int a);
void octHex(int a);

/*Hex to All Number Systems*/
int hexDecimal(char hex[], int b);
void hexBinary(char a[], int b);
void hexOctal(char a[], int b);

/*Console Command*/
void command(char c[]);
void home();