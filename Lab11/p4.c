/*program to scan the details of 10 book and write it to file named
"book.bin".Also scan the details from that file and display the 
details of the book whose author is"xyz".*/
#include<stdio.h>
struct book
{
    char bname[20],aname[20];
    float price;
};
int main()
{
    FILE *fp;
    struct book b[10];
    int i;
    fp=fopen("book.bin","wb");
    printf("Enter the Book_name,Author_name and price of a student");
    for(i=0;i<10;i++)
    {
    scanf("%s%s%f",b[i].bname,b[i].aname,&b[i].price);
    fprintf(fp,"%s %s %f",b[i].bname,b[i].aname,b[i].price);
    }
    fclose(fp);
    fp=fopen("book.bin","rb");
    for(i=0;i<10;i++)
    {
        if(b[i].aname=="xyz")
        {
    fscanf(fp,"%s %s %f",b[i].bname,b[i].aname,&b[i].price);
    printf("the details of book\n Book_name=%s\n Author_name=%s \n price=%f",b[i].bname,b[i].aname,b[i].price);
    }
    }
    fclose(fp);
    return 0;
}