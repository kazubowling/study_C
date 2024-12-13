#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fpr, *fpw;
    char bufr[256], bufw[256];
    char str1[] = "dog";
    char str2[] = "rabbit";
    char *p;

    if (!(fpr = fopen("dog.txt", "r")))
    {
        printf("読み込みファイルのオープンに失敗しました。\n");
        return 1;
    }
    if (!(fpw = fopen("rabbit.txt", "w")))
    {
        printf("書き込みファイルのオープンに失敗しました。\n");
        fclose(fpr); // 読み込みファイルを閉じて終了
        return 1;
    }

    while (fgets(bufr, sizeof(bufr), fpr) != NULL) // 1行ずつ読み込み
    {
        strcpy(bufw, bufr); // bufr の内容を bufw にコピー

        // "dog" を "rabbit" に置換
        while ((p = strstr(bufw, str1)) != NULL)
        {
            // 置換の実行
            char temp[256]; // 一時的なバッファ
            strcpy(temp, p + strlen(str1)); // "dog" の後ろの部分をコピー
            strcpy(p, str2);                // "rabbit" を書き込む
            strcat(p, temp);                // 後ろの部分を結合
        }

        fprintf(fpw, "%s", bufw); // 書き込みファイルに出力
    }

    fclose(fpr);
    fclose(fpw);

    return 0;
}
