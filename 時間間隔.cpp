
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int h1,m1,s1,h2,m2,s2,fh,fm,fs,t;
    printf("請輸入起始時間：");
    scanf("%d:%d:%d", &h1, &m1, &s1);
    printf("請輸入結束時間：");
    scanf("%d:%d:%d", &h2, &m2, &s2);
    fh = h1-h2;
    fm  = m1-m2;
    fs  = s1-s2;
	fh = abs(fh);
    fm = abs(fm);
    fs = abs(fs);
    t = fh * 3600 + fm * 60 + fs;
    printf("\n兩個時間間隔秒數為: %d\n", t);
    system("pause");
    return 0;
}
