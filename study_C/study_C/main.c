#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

main() 
{
	/* Hello World! */
	/*printf("Hello\nWorld!\n");*/

	/* printf()�̎g���� */
	/*printf("%d-%d��%d�ł��B\n", 3, 2, 3 - 2);*/

	/* ���낢��ȏ����w�� */
	/*printf("%s %c %f \n", "6��5", '=', 1.2);*/

	/* �錾�Ƒ�� */
	/*int a;
	int b;
	a = 2;
	b = 3;
	a = b;

	printf("%d\n", a);*/

	/* ���l�^ */
	/*unsigned char age = 25;
	double height = 166.7;
	float weight = 58.5;

	printf("�N��F%d��\n", age);
	printf("�g���F%fcm\n", height);
	printf("�̏d�F%fkg\n", weight);*/

	/* �����^ */
	/*char a = 'A';
	printf("%d\n", a);
	printf("%c\n", a);*/

	/* �������ϐ��ɑ������ */
	/*char s[10] = "Hello";
	printf("%s\n", s);

	strcpy(s, "Good bye");
	printf("%s\n", s);*/

	/* ����ȓ����\������ */
	/*printf("%8s	%8s\n", "���iA", "���iB");
	printf("����%08d %08d\n", 16, 246);
	printf("�d�� %8.4f %8.4f\n", 76.3, 556.1);
	printf("%d%c", 20, 10);
	printf("%d\bA\n", 20);
	printf("%d\t%d\n", 20, 30);*/

	/* ���̌v�Z�Ŏg�����Z�q */
	/*printf("5+5��%d�ł��B\n", 5 + 5);
	printf("5-5��%d�ł��B\n", 5 - 5);
	printf("5�~5��%d�ł��B\n", 5 * 5);
	printf("5��5��%d�ł��B\n", 5 / 5);
	printf("5��3�̗]���%d�ł��B\n", 5 % 3);*/

	/* ������Z�q */
	/*int a = 90;

	a += 10;
	printf("90��10�𑫂�����%d�ł��B\n", a);*/

	/*�C���N�������g�E�f�N�������g���Z�q*/
	/*int a = 1;
	printf("�͂��߂�%d�ł����B\n", a);

	a++;
	printf("1������%d�ɂȂ�܂����B\n", a);
	
	a--;
	printf("1������%d�ɖ߂�܂����B\n", a);*/

	/* a++��++a�̈Ⴂ */
	/*int a = 1, b = 1;

	printf("�O�u����%d�ɂȂ�܂��B\n", ++a);
	printf("��u����%d�ɂȂ�܂��B\n", b++);*/

	/* ��r���Z�q */
	/*int a = 10, b = 20;

	printf("a=%d b=%d\n", a, b);
	printf("a<b�E�E�E%d\n", a < b);
	printf("a>b�E�E�E%d\n", a > b);
	printf("a==b�E�E�E%d\n", a == b);
	printf("a=b�E�E�E%d\n", a = b);*/

	/* �������Z�q */
	/*int a = 30, x;

	x = (0 <= a && a <= 100) ? a : 0;
	printf("%d\n", x);*/

	/* n�i�� */
	/*int a = 15, b = 0x11;

	printf("10�i����%d��16�i���ł�%X\n", a, a);
	printf("16�i����%x��10�i���ł�%d\n", b, b);*/

	/* �r�b�g�ƃo�C�g */
	/* char c = 1;
	char s[10] = "Hello";

	printf("long�^ = %d �o�C�g\n", sizeof(long));
	printf("char�^ = %d �o�C�g\n", sizeof(c));
	printf("������ϐ� = %d �o�C�g\n", sizeof(s)); */

	/* �v�Z�̒��̌^�ϊ� */
	/*printf("3��2=%d\n", 3/2);
	printf("3��2=%f\n", 3.0/2.0);
	printf("3��2=%f\n", 3.0/2);
	printf("3��2=%f\n", 3/2.0);*/

	/* �L���X�g���Z�q */
	/*printf("3��2=%f\n", 3/(float)2);*/

	/* ���Z�q�̗D��x */
	/*printf("2�~8-6��2 = %d\n", 2*8-6/2);
	printf("2�~(8-6)��2 = %d\n", 2*(8-6)/2);
	printf("1-2+3 = %d\n", 1-2+3);
	printf("1-(2+3) = %d\n", 1-(2+3));*/

	/* if���Ƃ� */
	/*int a = 5;

	if (a%2 == 0){
		printf("%d�͋����ł��B\n", a);		
	}
	else {
		printf("%d�͊�ł��B\n", a);
	}*/

	int s = 65;

	printf("���Ȃ��̓_����%d�_�ł��B\n", s);

	if (s < 70){
		printf("���ς܂ł���%d�_�B\n", 70-s);
		printf("����΂�܂��傤�I\n");
	}
	else{
		printf("�悭�ł��܂����I\n");
	}
}