// 5. Write a function to print first N odd natural numbers. (TSRN).
#include<stdio.h>
int main()
{
    void oddnum(int num);
    int num;
    printf("print n odd number\n Enter number=");
    scanf("%d",&num);
    printf("Odd number:");
    oddnum(num);
    return 0;
}
 void oddnum(int num)
{
    for(int i=1;i<=num;i++)
    {
      
        printf("%d  ",2*i+1);
    }
}
