/*WAP to scan the details of 10 employee and write the details of employee
on "employee.txt". also scan the details from that file and display the 
details in Console.*/
#include<stdio.h>
struct employee 
{
    char name[20],post[10];
    float sal;
};
int main()
{
    FILE *fp;
    struct employee e[10];
    int i;
    fp=fopen("employee.txt","w");
    printf("Enter the name,post,and salary of a employee\n");
    for(i=0;i<10;i++)
    {
    scanf("%s%s%f",e[i].name,e[i].post,&e[i].sal);
    fprintf(fp,"%s %s %f",e[i].name,e[i].post,e[i].sal);
    }
    fclose(fp);
    fp=fopen("employee.txt","r");
    printf("The details of a employee is \n");
    for(i=0;i<10;i++)
    {
    fscanf(fp,"%s%s%f",e[i].name,e[i].post,&e[i].sal);
    printf(" name=%s\npost=%s\nsalary=%f\n",e[i].name,e[i].post,e[i].sal);
    }
    fclose(fp);
    return 0;
}