/*program to print the prime number of 50 except 5.*/
#include<stdio.h>
int main()
{
    int i,j,c=0,k;
    for(i=2;c<=50;i++)
    {
        k=0;
        for(j=2;j<=i;j++)
        {
            if(i%j==0)
            {
                k=k+1;
            }  
        }
        if(k==1)
        {
            if(i==5)
            {
                c=c+1;
                continue;
            }
            printf("%d\n",i);
            c=c+1;
        }
    }
    return 0;
}