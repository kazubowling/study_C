#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

main() 
{
	/*Hello World!*/
	printf("Hello\nWorld!\n");

	/*printf()の使い方*/
	printf("%d-%dは%dです。\n", 3, 2, 3 - 2);

	/*いろいろな書式指定*/
	printf("%s %c %f \n", "6÷5", '=', 1.2);

	/*宣言と代入*/
	int a;
	int b;
	a = 2;
	b = 3;
	a = b;

	printf("%d\n", a);
}