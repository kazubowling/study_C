#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main() 
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

	/* �A������if�� */
	/*int s = 65;

	printf("���Ȃ��̓_����%d�_�ł��B\n", s);

	if (s < 70){
		printf("���ς܂ł���%d�_�B\n", 70-s);
		printf("����΂�܂��傤�I\n");
	}
	else{
		printf("�悭�ł��܂����I\n");
	}*/

	/* ����q�ɂȂ���if�� */
	/*int a = 90;

	if (a > 80)
	{
		if (a == 100)
		{
			printf("���_�ł��B\n");
		}
		else
		{
			printf("���������ł��B\n");
		}
	}
	else
	{
		printf("����΂�܂��傤�B\n");
	}*/

	/* for�� */
	/*int i;

	for(i = 0; i < 4; i++)
	{
		printf("����ɂ���%d\n", i);
	}*/

	/* 2�d���[�v */
	/*int i, j;

	for (j = 1; j <= 9; j++)
	{
		for (i = 1; i <= 9; i++)
		{
			printf("%d×%d=%d\n", j, i, j * i);
		}
	}*/
	/* do~while文*/
	/*char a;
	do {
		a = getchar();
		printf("%c", a);
	}while(a != 'e');*/

	/* 繰り返しを中断する*/
	/*int a, b = 1;
	for(a = 0; a < 5; a++)
	{
		if(a+b >= 3)
			break;
		printf("%d+%d=%d¥n", a, b, a+b);
	}*/

	/* 繰り返しの次の回に移る*/
	/*int a, b = 1;
	for (a = 1; a < 5; a++)
	{
		if(a+b == 3)
			continue;
		printf("%d+%d=%d\n", a, b, a+b);
	}*/

	/* switch文*/
	/*char a;

	printf("1〜3で好きな数字を入力してください\n");
	a = getchar();

	switch (a)
	{
		case '1':
			printf("中吉\n");
			break;

		case '2':
			printf("大吉\n");
			break;

		case '3':
			printf("小吉\n");
			break;
		default:
			printf("入力が間違っています\n");
	}*/

	/* 配列要素の参照と代入 */
	/*int i;
	int a[] = {1, 2, 3, 4};

	for(i = 3; i >= 0; i--)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	return 0;*/

	/* 配列と文字列の関係 */
	/*int i = 0;
	char a[] = "NET";
	char b[4];

	while(a[i] != '\0')
	{
		b[i] = a[2-i];
		i++;
	}
	b[3] = '\0';
	printf("%sは逆から読むと%s\n", a, b);*/

	/* 文字列変換関連の関数 */
	/*char s1[] = "cat", s2[] = "dog";
	char s[20];
	sprintf(s, "I love %s and %s.", s1, s2);
	printf("「%s」の文字数は%d\n", s, strlen(s));*/

	/* 多次元配列への代入・初期化・参照 */
	/*int x, y;
	int a[2][3] = {
		{10, 20, 30},
		{40, 50, 60}
	};
	for(y = 0; y < 2; y++)
	{
		for(x = 0; x < 3; x++)
		{
			printf("a[%d][%d] = %d", y, x, a[y][x]);
		}
		printf("\n");
	}*/

	/*char a;
	short b;

	printf("aのアドレスは%p、bのアドレスは%p\n", &a, &b);*/

	char x = 4, y;
	char *p = &x;
	y = *p;
	printf("変数xの値は%dです\n", y);

	return 0;
}