/*Create a union called person with data member name, gender and age.
Wap t scan and display the details of a person.*/
#include<stdio.h>
union person
{
    char name[20],gen[10];
    int age;
};
int main()
{
    union person p;
    printf("\nEnter the name of person");
    scanf("%s",p.name);
    printf("\nName=%s",p.name);
    printf("\n\nEnter the gender of person");
    scanf("%s",p.gen);
    printf("\nGender=%s",p.gen);
    printf("\n\nEnter the age of person");
    scanf("%d",&p.age);
    printf("\n age=%d",p.age);
    return 0;
}