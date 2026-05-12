/*program to scan the details of five students with data member name,faculty,and id and pass it to function. and sort the elements on the basis  of alphabetical order of name and display it.*/
#include<stdio.h>
#include<string.h>
struct student 
{
    char name[20],fac[20];
    int id;
};
void display(struct student s[5]);
int main()
{
    struct student s1[5];
    int i;
    printf("enter the details of student like name ,faculty and id");
    for(i=0;i<5;i++)
    {
        scanf("%s%s%d",s1[i].name,s1[i].fac,&s1[i].id);
    }
    display(s1);
    printf("the alphabetically sorted details is ");
    for(i=0;i<5;i++)
    {
        printf("name=%s\t faculty=%s\t and id=%d",s1[i].name,s1[i].fac,s1[i].id);
    }
    return 0;
}
void display(struct student s[5])
{
    struct student  temp;
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(strcmp(s[i].name,s[j].name)>0)
            {
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
}