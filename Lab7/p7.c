/*program to  the sum display the following pattern
 1 + 11 + 111 + 1111 +.....+n */
 #include<stdio.h>
 int sum(int n);
 int main()
 {
    int term,s;
    printf("enter the number of term");
    scanf("%d",&term);
    s=sum(term);
    printf("\nthe sum is %d",s);
    return 0;
 }
 int sum(int n)
 {
    int i,t=0,sum=0;
    for(i=1;i<=n;i++)
    {
      t=t*10+1;
      printf("%d\t",t);
      sum=sum+t;
    }
return (sum);
 }
