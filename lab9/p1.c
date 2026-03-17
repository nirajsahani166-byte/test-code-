/*Create a structure called " student" with data member name,faculty,id
and marks in 6 subject. WAP to scan and display the details of a student.*/
#include<stdio.h>
struct student
{
    char name[20],fac[20];
    int id;
    int marks[6];
};
int main()
{
    struct student s;
    int i; 
    printf("Enter the name,faculty and id of a student \n");
    scanf("%s%s%d",s.name,s.fac,&s.id);
    printf("Enter the marks obtained by student in 6 subject \n");
    for(i=0;i<6;i++)
    {
    scanf("%d",&s.marks[i]);
    }
    printf("The details of a students is \n name=%s \nfaculty=%s \n id=%d \n",s.name,s.fac,s.id);
    printf("The marks obtained in 6 subject is \n");
    for(i=0;i<6;i++)
    {
        printf("%d\t",s.marks[i]);
    }
    return 0;
}