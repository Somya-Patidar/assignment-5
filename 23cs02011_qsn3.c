#include <stdio.h>
#include <math.h>

int main()
{
    int num, digits[4], i = 0;
    printf("Enter a four digit number:\n");
    scanf("%d", &num);

    int num_digits = floor(log10(num)) + 1;

    if (num_digits == 4)
    {
        while (num)
        {
            digits[i++] = num % 10;
            num /= 10;
        }

        printf("The new numbers formed are:\n");

        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                if (i == j)
                {
                    continue;
                }
                for (int k = 0; k < 4; k++)
                {
                    if (k == j || k == i)
                    {
                        continue;
                    }
                    for (int l = 0; l < 4; l++)
                    {
                        if (l == i || l == j || l == k)
                        {
                            continue;
                        }
                        printf("%d%d%d%d\n", digits[l], digits[k], digits[j], digits[i]);
                    }
                }
            }
        }
    }

    else printf("Invalid input");

    return 0;
}