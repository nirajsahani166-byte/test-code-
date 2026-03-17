/*program to illustrate the concept of nested structure*/
#include<stdio.h>
struct person
{
    struct student
    {
        char fac[20];
        int id;
    }s;
    char name[20];
};
int main()
{
    struct person p;
    printf("Enter name, faculty and id of student\n");
    scanf("%s%s%d",p.name,p.s.fac,&p.s.id);
    printf("The details of student is \n name=%s \nfaculty=%s \n id=%d",p.name,p.s.fac,p.s.id);
    return 0;
}