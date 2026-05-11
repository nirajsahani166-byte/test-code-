/*program to display 50 perfect number.*/
#include<stdio.h>
int main()
{
    int i,j,c=1,k;
    for(i=1;c<=50;i++)
    {
        k=0;
        for(j=1;j<i;j++)
        {
            if(i%j==0)
            {
                k=k+j;
            }
        }
        if(k==i)
        {
            printf("%d \n",k);
            c=c+1;
        }
    }
return 0;
}