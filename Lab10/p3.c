/*Create a structure called "Student" with data member name,
faculty,and id .pass it to function and sort the elements on the basis of 
alphabetical order of name and display the sorted elements in the main
function*/
#include<stdio.h>
#include<string.h>
struct student
{
    char name[20],fac[20];
    int id;
};
void sort(struct student s[5]);
int main()
{
    struct student s1[5];
    int i;
        printf("Enter the name,faculty and id of  5 student\n");
    for(i=0;i<5;i++)
    {
    scanf("%s%s%d",s1[i].name,s1[i].fac,&s1[i].id);
    }
    sort(s1);
    printf("The elements sorted in alphabetical order is \n");
    for(i=0;i<5;i++)
    {
        printf("name=%s\tfaculty=%s\tid=%d\n",s1[i].name,s1[i].fac,s1[i].id);
    }
    return 0;
}
void sort(struct student s[5])
{
    struct student temp;
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