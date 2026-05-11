/*program to scan the name of 5 person and sort the names of 
the person based on alphabetical order and display the sorted name in alphabetical order.*/
#include<stdio.h>
#include<string.h>
int main()
{
    char name[5][20],sort[20],i,j;
    printf("enter the name of five person");
    for(i=0;i<5;i++)
    {
        scanf("%s",name[i]);
    }
    printf("\n the names in alphabetical order :\n");
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(strcmp(name[i],name[j])>0)
            {
                strcpy(sort,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],sort);
            }
        }
    }
    for(i=0;i<5;i++)
    {
        printf("%s\n",name[i]);
    }
    return 0;
}