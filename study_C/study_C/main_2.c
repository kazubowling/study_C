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
/*int main(int argc, char *argv[])
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
}*/

/* テキストファイルの読み込み手順 */
// int main()
// {
//     FILE *fp;
//     char s[20];
//     int i = 1;
//     fp = fopen("abc.txt", "r");
    
//     if(fp == NULL)
//     {
//         return 0;
//     }
//     /*while(1)
//     {
//         fgets(s, 20, fp);
//         if(feof(fp))
//         {
//             break;
//         }
//         printf("%04d:%s", i, s);
//         i++;
//     }*/

//     while(fgets(s, sizeof(s), fp) != NULL)
//     {
//         printf("%04d:%s", i, s);
//         i++;
//     }

//     fclose(fp);
// }

/*int main()
{
    FILE *fp;
    int a = 100, b = 5, c = 40;
    int x = 1, y = 10, z = 100;
    char delm[] = "----====----\n";

    fp = fopen("mat.txt", "w");
    if(fp == NULL)
    {
        return 0;
    }
    fputs(delm, fp);
    fprintf(fp, "%4d%4d%4d\n%4d%4d%4d\n", a, b, c, x, y ,z);
    fputs(delm, fp);
    fclose(fp);
}*/

/* バイナリファイルの書き出し手順 */
/*int main()
{
    FILE *fp;
    char filename[] = "bintest.dat";
    int buf_w[10], buf_r[10];
    int i;

    for(i = 0; i < 10; i++)
    {
        buf_w[i] = (i+1) * 10;
    }
    if(!(fp = fopen(filename, "wb")))
    {
        return 0;
    }
    if(fwrite(buf_w, sizeof(int), 10, fp) != 10)
    {
        fclose(fp);
        return 0;
    }
    fclose(fp);

    if(!(fp = fopen(filename, "rb")))
    {
        return 0;
    }
    if(fread(buf_r, sizeof(int), 10, fp) != 10)
    {
        fclose(fp);
        return 0;
    }
    fclose(fp);

    for(i = 0; i < 10; i++)
    {
        printf("%d ", buf_r[i]);
    }
}*/

/* 標準入出力ファイルの種類 */
/*int main()
{
    char s[30];
    fgets(s, 29, stdin);
    fputs(s, stdout);
    fputs("error!\n", stderr);
}*/

/* キーボードからのデータ入力 */
int main()
{
    int a, b = 7;
    char s[40];
    printf("名前を入力してください\n");

    fgets(s, sizeof(s), stdin);
    
    printf("数あてクイズ！0から9の数字を入力してね\n");
    while(a != b)
    {
        scanf("%d", &a);

        if((a == b -1) || (a == b +1))
        {
            printf("おしい！\n");
        }
        else if(a > b+1)
        {
            printf("もっと小さい数です\n");
        }
        else if(a < b-1)
        {
            printf("もっと大きい数です\n");
        }
    }

    printf("正解！%sさん、おめでとう！\n", s);
}