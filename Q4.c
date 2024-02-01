//4. Write a function to print first N natural numbers (TSRN).
#include<stdio.h>
int main()
{
    void naturalnum(int num);
    int num1;
    printf("print first n natural number\n Enter number=");
    scanf("%d",&num1);
    printf("Natural number=");
    naturalnum(num1);
    return 0;
}
 void naturalnum(int num)
{
     for(int i=1;i<=num;i++)
     {
        printf("%d  ",i);
     }
}