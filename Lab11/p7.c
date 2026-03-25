/*Create a union called "student" with data member, name, faculty and id.
WAP to scan and display the details of 5 student.*/
#include<stdio.h>
union student
{
    char name[20],faculty[10];
    int id;
};
int main()
{
    union student s[5];
    int i;
    for(i=0;i<5;i++)
    {
    printf("\n\nEnter the name of student");
    scanf("%s",s[i].name);
    printf("\nName=%s",s[i].name);
    printf("\n\nEnter the faculty of student");
    scanf("%s",s[i].faculty);
    printf("\nfaculty=%s",s[i].faculty);
    printf("\n\nEnter the id of student");
    scanf("%d",&s[i].id);
    printf("\n age=%d",s[i].id);
    }
    return 0;
}