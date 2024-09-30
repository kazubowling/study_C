#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

main() 
{
	/*Hello World!*/
	printf("Hello\nWorld!\n");

	/*printf()‚Ìg‚¢•û*/
	printf("%d-%d‚Í%d‚Å‚·B\n", 3, 2, 3 - 2);

	/*‚¢‚ë‚¢‚ë‚È‘®w’è*/
	printf("%s %c %f \n", "6€5", '=', 1.2);

	/*éŒ¾‚Æ‘ã“ü*/
	int a;
	int b;
	a = 2;
	b = 3;
	a = b;

	printf("%d\n", a);
}