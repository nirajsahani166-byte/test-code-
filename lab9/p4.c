/*program to find the area and perimeter of rectangle using the
 concept of pointer*/
 #include<stdio.h>
 int main()
 {
    int l,b,a,p,*ptra,*ptrp,*ptrl,*ptrb;
    ptra =&a;
    ptrp =&p;
    ptrl =&l;
    ptrb =&b;
    printf("Enter the Value of the length and breadth");
    scanf("%d%d",ptrl,ptrb);
    *ptra=*ptrl**ptrb;
    *ptrp=2*(*ptrl+*ptrb);
    printf("The area is %d \t and the perimeter of rectangle is %d",*ptra,*ptrp);
    return 0;
 }