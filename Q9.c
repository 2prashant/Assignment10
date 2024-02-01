/*
9. Write a function to check whether a given number contains a given digit or not. 
(TSRS).
*/
#include<stdio.h>
int main()
{
   int finddigit(int num, int f);
   int num,f;
   printf("enter number=");
   scanf("%d",&num);
   printf("enter find digit=");
   scanf("%d",&f);
   printf("value is return 1 digit is present \n value is return 0 digit is not present\n\n");
   printf("Result=%d",finddigit(num,f));

   return 0;
}
 int finddigit(int num, int f)
 {
   int rem;
   while(num!=0)
   {
      rem=num%10;
      if(rem==f)
       return 1;
       num=num/10;
   }
    return 0;
 }
