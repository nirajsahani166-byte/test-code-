#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,c=0;
    printf("Enter the numbers");
    scanf("%d",&n);
for(i=2;i<n;i++)
{
   if(n%i==0)
   {
    c=c+i;
   } 
}
if(c==0)
{
    printf("prime");
}
else
{
    printf("not prime");
}
return 0;
}