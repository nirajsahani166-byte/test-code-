/*Program to calculate Area and perimeter of the rectangle and display it.*/
#include<stdio.h>
int main()
{
    int area,perimeter,lenght,breadth;
    printf("enter the lenght and breadth of the rectangle");
    scanf("%d%d",&lenght,&breadth);
    area=lenght*breadth;
    perimeter=2*(lenght+breadth);
    printf("%d is the area and %d is the perimeter of the rectangle",area,perimeter);
    return 0;
}