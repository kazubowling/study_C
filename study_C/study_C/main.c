#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

main() 
{
	/* Hello World! */
	/*printf("Hello\nWorld!\n");*/

	/* printf()の使い方 */
	/*printf("%d-%dは%dです。\n", 3, 2, 3 - 2);*/

	/* いろいろな書式指定 */
	/*printf("%s %c %f \n", "6÷5", '=', 1.2);*/

	/* 宣言と代入 */
	/*int a;
	int b;
	a = 2;
	b = 3;
	a = b;

	printf("%d\n", a);*/

	/* 数値型 */
	/*unsigned char age = 25;
	double height = 166.7;
	float weight = 58.5;

	printf("年齢：%d歳\n", age);
	printf("身長：%fcm\n", height);
	printf("体重：%fkg\n", weight);*/

	/* 文字型 */
	/*char a = 'A';
	printf("%d\n", a);
	printf("%c\n", a);*/

	/* 文字列を変数に代入する */
	/*char s[10] = "Hello";
	printf("%s\n", s);

	strcpy(s, "Good bye");
	printf("%s\n", s);*/

	/* 特殊な動作を表す文字 */
	/*printf("%8s	%8s\n", "商品A", "商品B");
	printf("数量%08d %08d\n", 16, 246);
	printf("重量 %8.4f %8.4f\n", 76.3, 556.1);
	printf("%d%c", 20, 10);
	printf("%d\bA\n", 20);
	printf("%d\t%d\n", 20, 30);*/

	/* 数の計算で使う演算子 */
	/*printf("5+5は%dです。\n", 5 + 5);
	printf("5-5は%dです。\n", 5 - 5);
	printf("5×5は%dです。\n", 5 * 5);
	printf("5÷5は%dです。\n", 5 / 5);
	printf("5÷3の余りは%dです。\n", 5 % 3);*/

	/* 代入演算子 */
	/*int a = 90;

	a += 10;
	printf("90に10を足したら%dです。\n", a);*/

	/*インクリメント・デクリメント演算子*/
	/*int a = 1;
	printf("はじめは%dでした。\n", a);

	a++;
	printf("1増えて%dになりました。\n", a);
	
	a--;
	printf("1減って%dに戻りました。\n", a);*/

	/* a++と++aの違い */
	/*int a = 1, b = 1;

	printf("前置だと%dになります。\n", ++a);
	printf("後置だと%dになります。\n", b++);*/

	/* 比較演算子 */
	/*int a = 10, b = 20;

	printf("a=%d b=%d\n", a, b);
	printf("a<b・・・%d\n", a < b);
	printf("a>b・・・%d\n", a > b);
	printf("a==b・・・%d\n", a == b);
	printf("a=b・・・%d\n", a = b);*/

	/* 条件演算子 */
	/*int a = 30, x;

	x = (0 <= a && a <= 100) ? a : 0;
	printf("%d\n", x);*/

	/* n進数 */
	/*int a = 15, b = 0x11;

	printf("10進数の%dは16進数では%X\n", a, a);
	printf("16進数の%xは10進数では%d\n", b, b);*/

	/* ビットとバイト */
	/* char c = 1;
	char s[10] = "Hello";

	printf("long型 = %d バイト\n", sizeof(long));
	printf("char型 = %d バイト\n", sizeof(c));
	printf("文字列変数 = %d バイト\n", sizeof(s)); */

	/* 計算の中の型変換 */
	/*printf("3÷2=%d\n", 3/2);
	printf("3÷2=%f\n", 3.0/2.0);
	printf("3÷2=%f\n", 3.0/2);
	printf("3÷2=%f\n", 3/2.0);*/

	/* キャスト演算子 */
	printf("3÷2=%f\n", 3/(float)2);
}