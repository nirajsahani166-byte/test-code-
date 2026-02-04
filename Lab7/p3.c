/*program to find the length of the string without using strlen()
 . also reverse the string without using strrev().*/
 #include<stdio.h>
 int main()
 {
    char name[20],sort;
    int i,j,l;
    printf("enter the names \n");
       scanf("%s",&name);
       l=0;
    while(name[l] !='\0')
    {
        l++;
    }
    printf("the length of the string is %d",l);
    i=0;
    j=l-1;
    while(i<j)
    {
        sort=name[i];
        name[i]=name[j];
        name[j]=sort;
        i++;
        j--;
    }
    printf("the reverse string is %s\n",name);
    
    return 0;
}
