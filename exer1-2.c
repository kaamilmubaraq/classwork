#include<stdio.h>

int main()
{
    float a,b;

    printf("a= ");scanf("%f",&a);
    printf("b= ");scanf("%f",&b);

    if (a>=b)
    {
        printf("%f,%f\n",a,b);
    }
    else
    {
        printf("%f,%f\n",b,a);
    }

    return 0;
    
}