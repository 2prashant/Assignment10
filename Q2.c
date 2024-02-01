// 2. Write a function to calculate simple interest. (TSRS)
#include<stdio.h>
float sempinter(float p,float r, float t);
int main()
{
    float p,R,t,k=0;
    printf("enter principal amount=");
    scanf("%f",&p);
    printf("enter rate%% per yrar=");
    scanf("%f",&R);
    printf(" enter time in year=");
    scanf("%f",&t);
    k=sempinter(p,R,t);
    printf("simple interest=%f",k);
    return 0;

}
float sempinter(float p,float R, float t)
{
    float cal,r;
     r=R/100;
    cal=(p*r*t);
    return (cal);

}
