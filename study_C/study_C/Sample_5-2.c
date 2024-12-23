#include <stdio.h>
#include <string.h>

int wtoj(int, char *, int *);

int main()
{
    int wyear = -1, jyear = 0;
    char nengo[16];

    printf("西暦→和暦の変換を行います。終了するには0を入力してください。\n");
    while(wyear != 0)
    {
        printf("西暦を入力してください(1868-2050)：");
        scanf("%d", &wyear);
        if(wtoj(wyear, nengo, &jyear) == 0)
        {
            printf("西暦%d年は、%s%d年です\n", wyear, nengo, jyear);
        }
    }
    return 0;
}

 /*************************************************
  wtoj() 西暦から和暦へ変換する
  [引数]     wyear -- 西暦
             nengo -- 和暦の年号文字列へのポインタ
             jyaer -- 和暦へのポインタ
  [戻り値]　変換出来たら0、範囲外なら1
  ************************************************/
int wtoj(int wyear, char *nengo, int *jyear)
{
    if(wyear >= 1868 && wyear <= 1911)
    {
        strcpy(nengo, "明治");
        *jyear = wyear - 1868 + 1;
        return 0;
    }
    else if(wyear >= 1912 && wyear <= 1925)
    {
        strcpy(nengo, "大正");
        *jyear = wyear - 1912 + 1;
        return 0;
    }
    else if(wyear >= 1926 && wyear <= 1988)
    {
        strcpy(nengo, "昭和");
        *jyear = wyear - 1926 + 1;
        return 0;
    }
    else if(wyear >= 1989 && wyear <= 2050)
    {
        strcpy(nengo, "平成");
        *jyear = wyear - 1989 + 1;
        return 0;
    }
    return 1;
}
