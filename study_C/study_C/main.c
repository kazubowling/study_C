#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

main() 
{
	/*Hello World!*/
	/*printf("Hello\nWorld!\n");*/

	/*printf()�̎g����*/
	/*printf("%d-%d��%d�ł��B\n", 3, 2, 3 - 2);*/

	/*���낢��ȏ����w��*/
	/*printf("%s %c %f \n", "6��5", '=', 1.2);*/

	/*�錾�Ƒ��*/
	/*int a;
	int b;
	a = 2;
	b = 3;
	a = b;

	printf("%d\n", a);*/

	/*���l�^*/
	/*unsigned char age = 25;
	double height = 166.7;
	float weight = 58.5;

	printf("�N��F%d��\n", age);
	printf("�g���F%fcm\n", height);
	printf("�̏d�F%fkg\n", weight);*/

	/*�����^*/
	/*char a = 'A';
	printf("%d\n", a);
	printf("%c\n", a);*/

	/*�������ϐ��ɑ������*/
	/*char s[10] = "Hello";
	printf("%s\n", s);

	strcpy(s, "Good bye");
	printf("%s\n", s);*/

	/*����ȓ����\������*/
	printf("%8s	%8s\n", "���iA", "���iB");
	printf("����%08d %08d\n", 16, 246);
	printf("�d�� %8.4f %8.4f\n", 76.3, 556.1);
	printf("%d%c", 20, 10);
	printf("%d\bA\n", 20);
	printf("%d\t%d\n", 20, 30);
}