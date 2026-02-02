#include<stdio.h>
#include<string.h>
int main()
{
    char name[10][20],sort[20];
    int i,j;
    printf("enter the names\t");
    for(i=0;i<10;i++)
    {
        scanf("%s",&name[i]);
    }
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(strcmp(name[i],name[j])>0)
            {
                strcpy(sort,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],sort);
            }
        }
    }
    printf("the list of name in alphabetical order is\n");
    for(i=0;i<10;i++)
    {
        printf(" %s",name[i]);
    }
    return 0;
}