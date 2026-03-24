/*WAP to scan the details of to books and write it to a file named"book.txt"
.Also scan the details from that file and display the details of  the book whose
price is greater than 500*/
#include<stdio.h>
struct book
{
    char bname[20],aname[20];
    float price;
};
int main()
{
    FILE *fp;
    struct book b[5];
    int i;
    fp=fopen("book.txt","w");
    printf("Enter the name,author and price of books\n");
    for(i=0;i<5;i++)
    {
    scanf("%s%s%f",b[i].bname,b[i].aname,&b[i].price);
    fprintf(fp,"%s %s %f",b[i].bname,b[i].aname,b[i].price);
    }
    fclose(fp);
    fp=fopen("book.txt","r");
    printf("The details of  book is \n");
    for(i=0;i<10;i++)
    {
        
    fscanf(fp,"%s %s %f",b[i].bname,b[i].aname,&b[i].price);
    if(b[i].price>500)
        {
    printf("Book_name=%s\nAuthor_post=%s\nprice=%f\n",b[i].bname,b[i].aname,b[i].price);
    }
    }
    fclose(fp);
    return 0;
}