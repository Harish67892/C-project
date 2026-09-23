#include <stdio.h>

void biggest3(void)
{
    int a, b, c;

    printf("Enter the numbers a, b and c: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b) {
        if (a >= c)
            printf("%d is the largest number.\n", a);
        else
            printf("%d is the largest number.\n", c);
    }
    else {
        if (b >= c)
            printf("%d is the largest number.\n", b);
        else
            printf("%d is the largest number.\n", c);
    }
}
