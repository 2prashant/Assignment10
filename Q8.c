/*8. Write a function to calculate the number of arrangements one can make from n items 
and r selected at a time. (TSRS)
*/
#include<stdio.h>
int main()
{
    int permutation (int num1,int num2);
    int n,r;
    printf("Enter n (items)");
    scanf("%d",&n);
    printf("enter r(selection)=");
    scanf("%d",&r);
    printf("permutation=%d",permutation(n,r));
    return 0;

}
int permutation (int num1,int num2)
{
    int cal1=1,cal2=1;
    int result=0;
    for(int i=num1;i>=1;i--)
    {
        cal1=cal1*i;
    }
    for(int j=(num1-num2);j>=1;j--)
    {
        cal2=cal2*j;
    }
    result=(cal1/cal2);
    return (result);

}
