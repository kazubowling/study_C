#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char usage[] = "usage: trash <-d> filname\n";
    int ret = 0; //関数の戻り値
    char newfilename[256] = "";

    // パラメータなし
    if(argc <= 1)
    {
        printf(usage);
        return 1;
    }
    // -d指定あり
    else if(strcmp(argv[1], "-d") == 0)
    {
        if(argc <= 2)
        {
            printf(usage);
            return 2;
        }
        ret = remove(argv[2]);
        if(ret == 0)
        {
            printf("ファイルを削除しました。\n");
        }
        else
        {
            printf("ファイルを削除できませんでした。\n");
        }
    }
    // -d指定なし
    else
    {
        sprintf(newfilename, "%s.bak", argv[1]);
        ret = rename(argv[1], newfilename);
        if(ret == 0)
        {
            printf("ファイル名の最後に.bakを付加しました。\n");
        }
        else
        {
            printf("ファイル名の変更ができませんでした。\n");
        }
    }
    return 0;
}