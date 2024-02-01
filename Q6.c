//6. Write a function to calculate the factorial of a number. (TSRS)
#include<stdio.h>
int main()
{
    int factornum(int num);
    int num;
    printf("print factorial number\nEnter number=");
    scanf("%d",&num);
    printf(" factorial=%d",factornum(num));
}
int factornum(int num)
{
    
    int fact=1;
    for(int i=num;i>=1;i--)
    {
          fact=fact*i;
    }
    return (fact);
}
