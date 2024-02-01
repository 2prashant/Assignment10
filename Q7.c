/*7. Write a function to calculate the number of combinations one can make from n items 
and r selected at a time. (TSRS)
*/
#include<stdio.h>
int main()
{
    int combination(int num1,int num2);
    int n,r;
    printf("\nEnter n (intem)=");
    scanf("%d",&n);
    printf("\nEnter r (secection)=");
    scanf("%d",&r);
    printf("combinations=%d",combination(n,r));
    return 0;
}
 int combination(int num1,int num2)
{
    int cal1=1,cal2=1,cal3=1,result=0;
   for(int i=num1; i>=1; i--) 
   {
       cal1=cal1*i;
   }
   for(int j=num2; j>=1; j--)
   { 
      cal2=cal2*j;
   }
   for(int k=num1-num2; k>=1; k--)
   {
      cal3=cal3*k;
   }
   result=(cal1/(cal2*cal3));
   return (result);

 }
