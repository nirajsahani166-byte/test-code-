/*program to illustrate the concept of nested structure.*/
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
    printf("enter the name, faculty and id ");
    scanf("%s%s%d",p.name,p.s.fac,&p.s.id);
    printf("\n name=%s\t faculty=%s\t id=%d\n",p.name,p.s.fac,p.s.id);
    return 0;
}