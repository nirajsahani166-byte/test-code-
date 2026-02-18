/*Create a structure called "student" with data member name,faculty and id 
program to scan a details of a student.*/
#include<stdio.h>
struct student
{
    char name[30], faculty[30];
    int id;
};
int main()
{
    struct student s;
    printf("Enter the name of the student , faculty and id ");
    scanf("%s%s%d",&s.name,&s.faculty,&s.id);
    printf("The details of a student \n name=%s \n faculty=%s \n id=%d",s.name,s.faculty,s.id);
    return 0;
}