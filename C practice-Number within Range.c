#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    if (num >= 10 && num <= 20) {
        printf("Number is within range\n");
    } else {
        printf("Number is outside the range\n");
    }

    return 0;
}
