/*WAP to scan the details of a student and write it to a file name"student.txt"
.Also scan the details from that file and display it to console.*/
#include<stdio.h>
struct student 
{
    char name[20],fac[10];
    int id;
};
int main()
{
    FILE *fp;
    struct student s;
    fp=fopen("student.txt","w");
    printf("Enter the name,faculty,and id of a student\n");
    scanf("%s%s%d",s.name,s.fac,&s.id);
    fprintf(fp,"%s%s%d",s.name,s.fac,&s.id);
    fclose(fp);
    fp=fopen("student.txt","r");
    fscanf(fp,"%s%s%d",s.name,s.fac,&s.id);
    printf("The details of a student is \n name=%s\nfaculty=%s\nid=%d\n",s.name,s.fac,s.id);
    fclose(fp);
    return 0;
}