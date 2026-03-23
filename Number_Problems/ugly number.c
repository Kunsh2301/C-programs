//ugly number
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num <= 0) {
        printf("%d is not an ugly number.\n", num);
        return 0;
    }
    int original = num;
    while (num % 2 == 0) num /= 2;
    while (num % 3 == 0) num /= 3;
    while (num % 5 == 0) num /= 5;
    if (num == 1)
        printf("%d is an ugly number.\n", original);
    else
        printf("%d is not an ugly number.\n", original);
    return 0;
}