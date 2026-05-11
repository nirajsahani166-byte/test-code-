/*program to display the 50 prime numbers */
#include<stdio.h>
int main()
{
    int i,j,k,c=1;
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
            printf("%d \n",i);
            c=c+1;
        }
    }
    return 0;
}