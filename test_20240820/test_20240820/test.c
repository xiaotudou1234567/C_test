#include <stdio.h>

typedef struct S
{
	char a : 3;
	char b : 4;
	char c : 5;
	char d : 4;
}S;

enum Colour
{
	GREEN = 1,
	BLACK,
	RED,
};

typedef union UN
{
	int i;
	char c;
}UN;

int main()
{
	//S s = { 0 };
	//s.a = 10;
	//s.b = 12;
	//s.c = 3;
	//s.d = 4;
	/*enum Colour BLUE = RED;*/

	UN un;
	un.i = 0x11223344;
	un.c = 0x55;

	return 0;
}