/*program to scan the string and sort the character of string
 in alphabetical order and display the sorted string .*/
 #include<stdio.h>
 #include<string.h>
 int main()
 {
    char name[20],sort;
    int i,j,l;
    printf("enter a string \n");
    scanf("%s",&name);
    l=strlen(name);
    for(i=0;i<l;i++)
    {
        for(j=i+1;j<l;j++)
        {
            if(name[i]>name[j])
            {
                sort=name[i];
                name[i]=name[j];
                name[j]=sort;
            }
        }
    }
    printf("the sorted string is\n %s",name);
    return 0;
 }