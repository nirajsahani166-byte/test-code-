/*create a structure name "book" with data member book-name, Author-name,price.
WAP to scan the details of 5 books and sort the details of book based on
 alphabetical order of Author-name and display sorted details*/
 #include<stdio.h>
 #include<string.h>
 struct book
 {
    char bname[30],aname[30];
    float price;
 };
 int main()
 {
    struct book b[5],temp;
    int i,j;
    printf("Enter the book-name,Author-name and price");
    for(i=0;i<5;i++)
    {
        scanf("%s%s%f",b[i].bname,b[i].aname,&b[i].price);
    }
    printf("the details of book details in alphabetical order is \n");
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(strcmp(b[i].aname,b[j].aname)>0)
            {
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
    }
    for(i=0;i<5;i++)
    {
        printf(" Book-name=%s \t Author-name=%s \t price=%f",b[i].bname,b[i].aname,b[i].price);
    }
    return 0;
 }
