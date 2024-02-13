#include <stdio.h>

int main() {
    int num, lstdigit,digit=0, sum = 0;
    
    int arr[10] = {0}; // Array to keep track of seen digits

    printf("Enter a number: ");
    scanf("%d", &num);
    int original=num;
    while (num != 0) {
        digit++;
        lstdigit = num % 10; // Extract the last digit
        if (arr[lstdigit]==0) { // If the digit is not seen before
            sum += lstdigit; // Add it to the sum
            arr[lstdigit] = 1; // Mark it as seen
        }
        num /= 10; // Move to the next digit
    }
    printf("no of digit in %d is:%d",original,digit);
    printf("\nSum of unique digits: %d\n", sum);

    return 0;
}