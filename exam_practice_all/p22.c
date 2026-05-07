/*program to print 1 -20 for concept of the break and continue.*/
#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<50;i++)
    {
        if (i==20)
        {
            break;/*it helps to go out from the loop or condition.*/
        }
        if(i>=5&&i<=15)
        {
            continue;/*it helps to skip something*/
        }
        printf("%d\n",i);
    }
    return 0;
}
