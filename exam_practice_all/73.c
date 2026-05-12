/*program to scan the details of the books and write it to a file named "book.txt".also scan the details from that file and display the details of the book whose price is greater than 500.*/
#include<stdio.h>
struct book
{
    char bname[20],aname[20];
    float price;
};
int main()
{
    struct book b[5];
    int i;
    FILE*fp;
    fp=fopen("book.txt","w");
    printf("enter the book name author name and price of 5 book");
    for(i=0;i<5;i++)
    {
        scanf("%s%s%f",b[i].bname,b[i].aname,&b[i].price);
        fprintf(fp,"%s%s%f",b[i].bname,b[i].aname,b[i].price);
    }
    fclose(fp);
    fp=fopen("book.txt","r");
    printf("the details of book:\n");
    for(i=0;i<5;i++)
    {
        fscanf(fp,"%s%s%f",b[i].bname,b[i].aname,&b[i].price);
        if(b[i].price>500)
        {
            printf("Book=%s\t Author=%s\t and price=%f\n",b[i].bname,b[i].aname,b[i].price);
        }
    }
    fclose(fp);
    return 0;
}