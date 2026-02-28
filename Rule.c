#include <stdio.h>

int main() {
    int num, temp, digitSum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (temp != 0) {
        digitSum += temp % 10;
        temp /= 10;
    }

    int div3 = (digitSum % 3 == 0);
    int div5 = (num % 5 == 0);

    if (div3 && div5)
        printf("%d is divisible by 15", num);
    else
        printf("%d is not divisible by 15", num);

    return 0;
}
