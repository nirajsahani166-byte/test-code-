#include<stdio.h>
int main()
{
    int t1=2,t2=3,trm,i;
    for(i=0;i<25;i++)
    {
        if(i==6)
        {
            
            t1=t1+1;
        t2=t2+2;
        continue;
        }
        else{
        trm=t1*t2;
        printf("term:%d\t %d\n",i+1,trm);
        t1=t1+1;
        t2=t2+2;
        }
    }
    return 0;
}