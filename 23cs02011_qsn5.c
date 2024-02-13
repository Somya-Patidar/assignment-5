#include <stdio.h>

int main() {
    char input;
    int num, sum = 0;

    do {
        printf("Provide the number: ");
        scanf("%d", &num);

        if (num % 2 == 0) {
            sum += num;
        }

        printf("Do you want to continue? (Y/N): ");
        scanf(" %c", &input);

        if (input != 'Y' && input != 'y' && input != 'N' && input != 'n') {
            printf("Invalid input.\n");
            break;
        }
    } while (input == 'Y' ||input == 'y');

    printf("Sum of even integers: %d\n", sum);

    return 0;
}