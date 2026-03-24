/*WAP to scan the number from 1 to n and find the even do and write it to
the file name "Even.txt" and write the odd number to "odd.txt".*/
#include<stdio.h>
int main()
{
    FILE *fp1,*fp2;
    int n,i,a[200];
    printf("Enter the value of n\n");
    scanf("%d",&n);
    printf("Enter the numbers");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    fp1=fopen("even.txt","w");
    fp2=fopen("odd.txt","w");
    for(i=0;i<n;i++)
    {
       if(a[i]%2==0)
       {
        fprintf(fp1,"%d ",a[i]);
       }
       else
       {
        fprintf(fp2,"%d ",a[i]);
       }
    }
    fclose(fp1);
    fclose(fp2);
    printf("Sucessfully saved!");
    return 0;
}