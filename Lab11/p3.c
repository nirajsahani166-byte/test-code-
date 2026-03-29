/*program to scan the details of 5 employee and write it to file named
"employee.bin".also scan the data from the file and display it to console.*/
#include<stdio.h>
struct employee
{
    char name[20],post[20];
    float salary;
};
int main()
{
    FILE *fp;
    struct employee e[5];
    int i;
    fp=fopen("employee.bin","wb");
    printf("Enter the name,post and salary of a employee");
    for(i=0;i<5;i++)
    {
    scanf("%s%s%f",e[i].name,e[i].post,&e[i].salary);
    fprintf(fp,"%s %s %f",e[i].name,e[i].post,e[i].salary);
    }
    fclose(fp);
    fp=fopen("employee.bin","rb");
    for(i=0;i<5;i++)
    {
    fscanf(fp,"%s %s %f",e[i].name,e[i].post,&e[i].salary);
    printf("the details of employee\n name=%s\n post=%s \n salary=%f\n\n",e[i].name,e[i].post,e[i].salary);
    }
    fclose(fp);
    return 0;
}