/*                             Functions in C Language
1. Write a function to calculate the area of a circle. (TSRS)
*/
#include<stdio.h>
float areac(float a);
int main()
{
    float r,k;
    printf("Enter area of length");
    scanf("%f",&r);
    k =areac(r);
    printf("area=%f",k);
    return 0;

}
float areac(float a)
{
    float area;
     area=3.14*a*a;
     return area;
}
