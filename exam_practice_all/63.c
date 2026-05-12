/*create a structure name "book" with data member book-name,author-name,price.WAP to scan the details of 5 books and sort the details of book based of the alphabetical order of Author name and display the sorted details.*/
#include<stdio.h>
#include<string.h>
struct book
{
    char bname[20],aname[20];
    float price;
};
int main()
{
    struct book b[5],sort;
    int i,j;
    printf("enter the book_name,author_name and price.");
    for(i=0;i<5;i++)
    {
        scanf("%s%s%f",b[i].bname,b[i].aname,&b[i].price);
    }

    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(strcmp(b[i].aname,b[j].aname)>0)
            {
                sort=b[i];
                b[i]=b[j];
                b[j]=sort;
            }
            
        }
    }
    printf("\nthe details :\n");
    for(i=0;i<5;i++)
    {
        printf("Book=%s\t Author=%s\t price=%s\n",b[i].bname,b[i].aname,b[i].price);
    }
    return 0;
}