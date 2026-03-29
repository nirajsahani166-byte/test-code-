/*progrma to scan the details of a employee and write it to a file named
"employee.bin".Also scan the data from the file and display it to console*/
#include<stdio.h>
struct employee
{
    char name[20],post[20];
    float salary;
};
int main()
{
    FILE *fp;
    struct employee e;
    fp=fopen("employee.bin","wb");
    printf("Enter the name,post and salary of a employee");
    scanf("%s%s%f",e.name,e.post,&e.salary);
    fprintf(fp,"%s %s %f",e.name,e.post,e.salary);
    fclose(fp);
    fp=fopen("employee.bin","rb");
    fscanf(fp,"%s %s %f",e.name,e.post,&e.salary);
    printf("the details of employee\n name=%s\n post=%s \n salary=%f",e.name,e.post,e.salary);
    fclose(fp);
    return 0;
}