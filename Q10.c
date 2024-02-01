// /*10. Write a function to print all prime factors of a given number. For example, if the 
// number is 36 then your result should be 2, 2, 3, 3. (TSRN)

#include <stdio.h>
void printPrimeFactors(int number) {   
    while (number % 2 == 0) {
        printf("%d, ", 2);
        number = number / 2;
    } 
    for (int i = 3; i <= number; i = i + 2) {
        while (number % i == 0) {
            printf("%d, ", i);
            number = number / i;
        }
    }
    if (number > 2) {
        printf("%d, ", number);
    }
}
int main() 
{
    int num;
    printf("Enter Number : ");
    scanf("%d",&num);
    printf("Prime factors of %d are: ", num);
    printPrimeFactors(num);
    return 0;
}


 