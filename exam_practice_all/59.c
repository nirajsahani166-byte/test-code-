/*create a structure called 'book' with data member Author ,publisher and price .progam to scanf and display the details of 5 books*/
#include<stdio.h>
struct book
{
    char aname[20],pub[20];
    float price;
};
int main()
{
    struct book b[5];
    int i;
    printf("enter the name of author , publisher and price of five books");
    for(i=0;i<5;i++)
    {
        scanf("%s%s%f",b[i].aname,b[i].pub,&b[i].price);
    }
    printf("\n the entered details of the books:\n");
    for(i=0;i<5;i++)
    {
        printf("Author =%s \t publisher= %s\t price= %f\n",b[i].aname,b[i].pub,b[i].price);
    }
    return 0;
}