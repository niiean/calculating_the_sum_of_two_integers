#include <stdio.h>

int main() {

    int sum1 = 0;
    int sum2 = 0;

    printf("Enter the first number: "); //it promts the user to enter the first number
    scanf("%d", &sum1); //it takes the input from the user and stores it in sum1

    printf("Enter the second number: "); //it promts the user to enter the second number
    scanf("%d", &sum2); //it takes the input from the user and stores it in sum2

    int sum = 0; // variable to store the sum of the two numbers
    sum = sum1 + sum2; // it calculates the sum of the two numbers and stores it in the variable sum

    printf("The sum is %d\n", sum); //we use the \n to print the sum on a new line

    return 0;
}