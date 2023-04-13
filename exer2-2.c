#include<stdio.h>

int give_n_factors(int n)
{

    int count = 1; 

    for(int i = 1; i <= n/2; i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int n=0;

    //自然数nを入力するため。
    do 
    {
        printf("n= ");scanf("%d",&n);
    } while (n<=0);

    printf("nの約数の個数は%dです。\n",give_n_factors(n));

    return 0;
}