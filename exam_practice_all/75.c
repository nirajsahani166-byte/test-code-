/*Program to scan the details of 10 book and write it to file name "book.bin".Also scan the details from that file and display the details of the book whoose author is "xyz".*/
#include<stdio.h>
#include<string.h>
struct book
{
    char bname[20],aname[30];
    float price;
};
int main()
{
    struct book b[10];
    int i;
    FILE*fp;
    fp=fopen("book.bin","wb");
    printf("enter the name, author name and price of book");
    for(i=0;i<10;i++)
    {
        scanf("%s%s%f",b[i].bname,b[i].aname,&b[i].price);
        fprintf(fp,"%s %s %f",b[i].bname,b[i].aname,b[i].price);
    }
    fclose(fp);
    fp=fopen("book.bin","rb");
    printf("The details of the book:\n");
    for(i=0;i<10;i++)
    {
        fscanf(fp,"%s %s %f",b[i].bname,b[i].aname,&b[i].price);
        if(strcmp(b[i].aname,"XYz")==0)
        {
            printf("Book=%s\t Author=%s\t Price=%f",b[i].bname,b[i].aname,b[i].price);
        }
    }
    fclose(fp);
    return 0;
}