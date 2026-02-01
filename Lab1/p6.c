/*program to find the distance between two points and display it*/
#include<stdio.h>
#include<math.h>
int main()
{
    int x1,x2,y1,y2;
    float d=0.0;
    printf("enter the value of x1,x2 and y1,y2");
    scanf("%d%d%d%d",&x1,&x2,&y1,&y2);
    d=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    printf("the distance is %f",d);
    return 0;
}