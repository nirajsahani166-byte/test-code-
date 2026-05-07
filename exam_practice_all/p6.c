/*program to find the distance between the two points and display it */
#include<stdio.h>
#include<math.h>
int main()
{
    int x1,x2,y1,y2,distance;
    printf("Enter the value of x1,y1 and x2,y2");
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    distance=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    printf("the distance between the points(%d,%d) and points(%d,%d) is %d",x1,y1,x2,y2,distance);
    return 0;
}