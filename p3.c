#include<stdio.h>
int main()
{
int sec,min,hr;
printf("enter seconds");
scanf("%d",&sec);
hr=sec/3600;
sec=sec%3600;
min=sec/60;
sec=sec%60;
printf(" %dhr %dmin %dsec",hr,min,sec);
return 0;
}