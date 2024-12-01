#include <stdio.h>

int main()
{
    char s[] = "I love cat and dog."; /* 探す対象の文字列 */
    char c = 'a';                     /* 探す文字 */
    char *p = s;                      /* ポインタで文字列を探索 */
    int n = 0;                        /* 見つけた文字数 */

    printf("\"%s\"の中から\'%c\'を探します。\n", s, c);

    while (*p != '\0')                /* 文字列の終端まで探索 */
    {
        if (*p == c)
        {
            printf("%ld文字目で発見しました。\n", p - s + 1);
            n++;
        }
        p++;
    }

    if (n == 0)
    {
        printf("1つも見つかりませんでした。\n");
    }
    else
    {
        printf("全部で%d個見つかりました。\n", n);
    }

    return 0;
}
