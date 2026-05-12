/*create a structure called "student" with data member name,faculty and Id .program to scan a detals of a students.*/
#include<stdio.h>
struct student
{
    char name[20],fac[20];
    int id;
};
int main()
{
    struct student s;
    printf("enter the name,faculty,and id of student");
    scanf("%s%s%d",s.name,s.fac,&s.id);
    printf("\n the details of the student is \n name=%s\tfaculty=%s\tid=%d",s.name,s.fac,s.id);
    return 0;
}