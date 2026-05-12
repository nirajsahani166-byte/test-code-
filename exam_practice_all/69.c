/*program to illustrate the concept of passing structure to function.*/
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
    printf("enter the name,faculty and id of the student.");
    scanf("%s%s%d",&s1.name,&s1.fac,&s1.id);
    display(s1);
    return 0;
}
void display(struct student s)
{
    printf("\n name=%s\tfaculty=%sand id=%d",s.name,s.fac,s.id);
}