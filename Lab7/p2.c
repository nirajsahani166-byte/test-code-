/*program to scan the  name of 5 person and sort the names of the person based on alphabetical order 
and display the sorted name in alphabetical order .*/
 #include<stdio.h>
 #include<string.h>
 int main()
 {
    char name[5][20],sort[10];
    int i,j,l;
    printf("enter the names \n");
    for(i=0;i<5;i++)
    {
       scanf("%s",&name[i]);
    }
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
    printf("the sorted string is\n ");
    for(i=0;i<5;i++)
    {
        printf("%s\t",name[i]);
    }
    return 0;
 }