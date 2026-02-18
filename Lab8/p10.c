/*Create a structure called 'book' with data member Author, publiser 
and price. program to scan and display the details of 5 book*/
#include<stdio.h>
struct book
{
    char Author[30],publiser[30];
    float price;
};
int main()
{
    struct book b[5];
    int i;
    printf("Enter the Author, publiser and price of books");
    for(i=0;i<5;i++)
    {
        scanf("%s%s%f",&b[i].Author,&b[i].publiser,&b[i].price);
    }
    printf("The details of books are \n");
    for(i=0;i<5;i++)
    {
        printf("Author=%s\t publiser=%s\t price=%f\n",b[i].Author,b[i].publiser,b[i].price);
    }
    return 0;
}