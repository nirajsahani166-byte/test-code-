/*program to calculate area and perimeter of a rectangle and display it */
#include <stdio.h>
int main()
{
    int l,b,a,p;
    printf("enter the length and breadth of rectangle");
    scanf("%d%d",&l,&b);
    a=l*b;
    p=2*(l+b);
    printf("area =%d \t perimeter =%d",a,p);
    return 0;
}