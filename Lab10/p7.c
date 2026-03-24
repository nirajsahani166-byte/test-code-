/*WAP to copy the content of "person.txt" to "student.txt".*/
#include<stdio.h>
#include<stdlib.h>
struct person
{
    char name[20],add[30];
    int age;
};
int main()
{
    FILE *fp1 ,*fp2;
    struct person p;
    fp1=fopen("person.txt","w");
    if(fp1==NULL)
    {
        printf("file doesn't exist \n");
        exit(0);
    }
        printf("Enter the name,address and age of the person\n");
        scanf("%s%s%d",p.name,p.add,&p.age);
        fprintf(fp1,"%s %s %d",p.name,p.add,p.age);
        fclose(fp1);
    fp1=fopen("person.txt","r");
    fp2=fopen("student.txt","w");
    if(fp1==NULL)
    {
        printf("file doesn't exist \n");
        exit(0);
    }
    else
    {
    fprintf(fp2,"%s %s %d",p.name,p.add,p.age);
    }
    fclose(fp2);
    fclose(fp1);
    printf("Content successfully copied from person.txt to student.txt");
    return 0;
}