#include <stdio.h>
#include <string.h>

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
/*int y;
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
}*/


/* プロトタイプ */
/*void dispnum(int);

int main()
{
    int x = 10;

    dispnum(5);
    dispnum(x);
}

void dispnum(int a)
{
    printf("引数の値は：%d\n", a);
}*/

/* 値渡しと参照渡し */
/*void swapbyval(int, int);
void swapbyref(int *, int *);

int main()
{
    int a = 2, b = 7;

    printf("a=%d、b=%d\n", a, b);
    swapbyval(a, b); //値渡し
    printf("a=%d、b=%d\n", a, b);
    swapbyref(&a, &b); //参照渡し
    printf("a=%d、b=%d\n", a, b);
}

void swapbyval(int x, int y) 
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

void swapbyref(int *x, int *y) //ポインタとして宣言
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}*/

/* maine()関数の書式 */
int main(int argc, char *argv[])
{
    int i;

    if(argc <= 1){
        return 1;
    }
    if(strcmp(argv[1], "enum") == 0)
    {
        for(i = 0; i < argc; i++)
        {
            printf("argv[%d]:%s\n", i, argv[i]);
        }
    }
    else if(strcmp(argv[1], "count") == 0)
    {
        printf("コマンドライン引数の数: %d\n", argc - 1);
    }
    return 0;
}