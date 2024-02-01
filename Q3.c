/* 
3. Write a function to check whether a given number is even or odd. Return 1 if the 
number is even, otherwise return 0. (TSRS)
*/
#include<stdio.h>
int main()
{
    int numEV(int num);
    int num;
    printf(" Check number even or odd \n enter number=");
    scanf("%d",&num);
    printf("%d",numEV(num));
}
int numEV(int num)
{
    if(num%2==0)
    {
      
       return 1;
    }
    else
    {
      
        return 0;
    }
}


