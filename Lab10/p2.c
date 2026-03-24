/*WAP to illustrate the concept of passing structure to function*/
#include<stdio.h>
struct student
{
    char name[20],fac[20];
    int id;
};
void display(struct student s);
int main()
{
    struct student s1;
    printf("Enter the name, faculty and id of student\n");
    scanf("%s%s%d",&s1.name,&s1.fac,&s1.id);
    display(s1);
    return 0;
}
void display(struct student s)
{
    printf("The details of a student is \n name=%s \n faculty=%s \n id=%d",s.name,s.fac,s.id);
}