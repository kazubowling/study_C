#include <stdio.h>

/* 関数呼び出しの基本 */
/*void dispnum(int a)
{
    printf("引数の値は%d\n", a);
}

int main()
{
    int x = 10;

    dispnum(5);
    dispnum(x);
}*/

/* 戻り値を利用する */
/*int addnum(int a, int b)
{
    int x;

    x = a + b;
    return x;
}

int main()
{
    int n;
    n = addnum(2, 3);
    printf("戻り値は%d\n", n);
}*/

/* ローカル変数とグローバル変数 */
int y;
int z;

void myfunc(int a)
{
    int z;
    int x;
    x = a;
    y = a;
    z = a;
}

int main()
{
    int x;
    x = 10;
    y = 10;
    z = 10;

    printf("x, y, zの値は%d, %d, %d\n", x, y, z);
    myfunc(5);
    printf("x, y, zの値は%d, %d, %d\n", x, y, z);
}
