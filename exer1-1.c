//exer1-1.c

/*このコードのスクリーンショットは、VS コードのCodesnap
拡張機能を使用してキャプチャされている。*/

#include <stdio.h>

int main()
{
    int a,b,c;

    printf("a = "); scanf("%d", &a);
    printf("b = "); scanf("%d", &b);
    printf("c = "); scanf("%d", &c);

    float ave = (a+b+c)/3.0;

    printf("\na,b,cの平均は = %.2fです\n。",ave);

    return 0;
}