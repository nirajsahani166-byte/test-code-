/*Program to find the area and perimeter of rectangle using the concept of pointer.*/
#include<stdio.h>
int main()
{
    int l,b,a,p,*ptrl,*ptrb,*ptra,*ptrp;
    ptrl=&l;
    ptrb=&b;
    ptra=&a;
    ptrp=&p;
    printf("enter the value of length and breadth of the rectangle");
    scanf("%d%d",ptrl,ptrb);
    *ptra=*ptrl**ptrb;
    *ptrp=2*(*ptrl+*ptrb);
    printf("\n the area of rectangle is %d and perimeter is %d .",*ptra,*ptrp);
    return 0;
}