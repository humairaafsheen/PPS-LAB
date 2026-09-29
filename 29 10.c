Right shift operation:
#include<stdio.h>
int main()
{
 int a,n,result;
 printf("Enter a number:");
 scanf("%d",&a);
 printf("Enter shift position:");
 scanf("%d",&n);
 result=a>>n;
 printf("Right shift Result=%d",result);
 return 0;
}


