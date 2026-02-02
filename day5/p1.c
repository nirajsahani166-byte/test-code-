#include<stdio.h>
#include<string.h>
int main()
{
    char sort, name[20];
    int i,j;
    printf("enter a string\t");
    scanf("%s",&name);
    for(i=0;i<strlen(name);i++)
    {
        for(j=i+1;j<strlen(name);j++)
        {
            if(name[i]>name[j])
            {
                sort=name[i];
                name[i]=name[j];
                name[j]=sort;
            }
        }
    }
    printf("the sorted string is %s",name);
    return 0;
}