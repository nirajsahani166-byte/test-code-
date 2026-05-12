/*program to scan the details of 10 employee and write the details of employee on "emplyee.txt",also scan the details from that file and display the details in console.*/
#include<stdio.h>
struct employee
{
    char name[10],add[30];
    int id;    
};
int main()
{
    struct employee e[10];
    int i;
    FILE*fp;
    fp=fopen("employee.txt","w");
    printf("enter the name,address and id of 10 employee");
    for(i=0;i<10;i++)
    {
        scanf("%s%s%d",e[i].name,e[i].add,&e[i].id);
        fprintf(fp,"%s%s%d",e[i].name,e[i].add,e[i].id);
    }
    fclose(fp);
    fp=fopen("employee.txt","r");
    printf("the details of employee:\n");
    for(i=0;i<10;i++)
    {
        fscanf(fp,"%s %s %d",e[i].name,e[i].add,&e[i].id);
        printf("name=%s\t address=%s\t id=%d",e[i].name,e[i].add,e[i].id);
    }
    fclose(fp);
    return 0;
}