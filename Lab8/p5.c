/*program to find the sum of the series 1 +11 +111+ 1111+ 11111.......+n-terms
 using recursive function*/
#include<stdio.h>
int sum(int n1);
int main()
{
    int trm,s,i,sum1=0;
    printf("enter the number of term\n");
    scanf("%d",&trm);
    for(i=1;i<=trm;i++)
    {
    s=sum(i);
    printf(" %d \t",s);
    sum1=sum1+s;
    }
    printf("\nThe sum of the %d term of the series is %d ",trm,sum1);
    
    
    return 0;
}
int sum(int n1)
{
    if(n1==1)
    {
        return (1);
    }
    else
    {
        return (1+10*sum(n1-1));
    }

}