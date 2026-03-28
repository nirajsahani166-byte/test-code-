/*program to scan the details of a student and write it to a file named
"student.dat".Also scan the value from the file display it to console*/
#include<stdio.h>
struct student
{
    char name[20],add[20];
    int id;
};
int main()
{
    FILE *fp;
    struct student s;
    fp=fopen("student.dat","wb");
    printf("Enter the name,address and id of a student");
    scanf("%s%s%d",s.name,s.add,&s.id);
    fprintf(fp,"%s %s %d",s.name,s.add,s.id);
    fclose(fp);
    fp=fopen("student.dat","rb");
    fscanf(fp,"%s %s %d",s.name,s.add,&s.id);
    printf("the details of student\n name=%s\n address=%s \n id=%d",s.name,s.add,s.id);
    fclose(fp);
    return 0;
}