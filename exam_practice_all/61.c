/*create a structue called "student" with data member name,faculty,id and marks in 6 subject. Wap to scan and display the details of a student.*/
#include<stdio.h>
struct student 
{
    char name[20],faculty[20];
    int id;
    float marks;
};
int main()
{
    struct student s[6];
    int i;
    printf("enter the name,faculty,id and marks of 6 subject");
    for(i=0;i<6;i++)
    {
        scanf("%s%s%d%f",s[i].name,s[i].faculty,s[i].id,s[i].marks);
    }
    printf("\nthe details of student :\n");
    for(i=0;i<6;i++)
    {
        printf("name=%s\t faculty=%s\t id=%d\t marks=%f\n",s[i].name,s[i].faculty,s[i].id,s[i].marks);
    }
    return 0;
}