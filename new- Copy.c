#include<stdio.h>
#include<math.h>
int main()
{
 int n,count=0,r,gn,mn,cn;
 printf("Enter the number:");
 scanf("%d",&n);

 while(n!=0)
 {
  n=n/10;
  count++;
 }
 printf("Digit:%d",count);
}
