#include<stdio.h>
int main()
{
 int password;
 printf("Enter password:");
 scanf("%d",&password);
 if(password==1234)
 {
  printf("login successful");
 }
  else
 {
  printf("incorrect password");
 }
  return 0;
}
