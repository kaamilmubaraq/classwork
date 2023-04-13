//exer2-1

/*このコードのスクリーンショットは、VS コードのCodesnap
拡張機能を使用してキャプチャされている。*/

#include<stdio.h>

#define LIMIT 9
#define horiz_line printf("-----------------------------------------\n");

int d_no(int n)
{
    int count= 0;
    while(n!=0)  
   {  
       n=n/10;  
       count++;  
   }  
   return count;
}

int main()
{
    horiz_line
    printf("|   |1  |2  |3  |4  |5  |6  |7  |8  |9  |\n");
    horiz_line
    

    for(int i = 1; i<=LIMIT; i ++)
    {
        printf("|%d  |",i);
        for(int j = 1; j<=LIMIT;j++)
        {
            int value = i*j;
            int n_digit = d_no(value);

            if(n_digit == 1)
            {
                printf("%d  |",i*j);
            }
            else
            {
                printf("%d |",i*j);
            }
        }
        printf("\n");
        horiz_line
    }
    return 0;
    
}