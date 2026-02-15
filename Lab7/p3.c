/*program to find the length of the string without using strlen()
 . also reverse the string without using strrev().*/
 #include<stdio.h>
 int main()
 {
    char name[20],sort;
    int i,j,l;
    printf("enter the name \n");
       scanf("%s",&name);
       /*l=0;
    while(name[l] !='\0')
    {
        l++;        alternatives of finding length of the string
    }
    */
   for(l=0;name[l] !='\0';l++)
   {}
    printf("the length of the string is %d\n",l);
    /*
     i=0;
    j=l-1;
    while(i<j)
    {
        sort=name[i];
        name[i]=name[j]; alternatives of reversing a string
        name[j]=sort;
        i++;
        j--;
    }
    */
   /* 
   for(i=0,j=l-1;i<j;i++,j--)
   {
    sort=name[i];
    name[i]=name[j];  alternatives of reversing a string
    name[j]=sort;
   }
    */
   for(i=0;i<l/2;i++) 
   {
    sort=name[i];
    name[i]=name[l-1-i];
    name[l-1-i]=sort;
   }
    printf("the reverse string is %s\n",name);
    
    return 0;
}
