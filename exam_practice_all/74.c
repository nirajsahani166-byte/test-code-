/*program to scan the details of a student and write it to a file name "student.dat".Also scan the value from the file display it to console.*/
#include<stdio.h>
struct student 
{
    char name[20],fac[20];
    int id;
};
int main()
{
    struct student s;
    FILE*fp;
    fp=fopen("student.dat","wb");
    printf("enter the name,faculty and id of student.");
    scanf("%s%s%d",&s.name,&s.fac,&s.id);
    fprintf(fp,"%s %s %d",s.name,s.fac,s.id);
    fclose(fp);
    fp=fopen("student.dat","rb");
    fscanf(fp,"%s %s %d",s.name,s.fac,&s.id);
    printf("name=%s\t faculty=%s\t and id=%d",s.name,s.fac,s.id);
    fclose(fp);
    return 0;
}