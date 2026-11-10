#include<stdio.h>
int main()
{
 int values[4];
 printf("Enter 4 integers");
 //taking input and storing it in an array
 for(int i=0;i<4;++i)
 {
  scanf("%d",&values[i]);
 }
 printf("Displaying integers:");
 //printing elements of an array
 for(int i=0;i<4;++i)
{
 printf("%d\t",values[i]);
}
return 0;
}
