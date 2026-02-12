#include<stdio.h>

int main() {
    char a;
    scanf("%c",&a);
    if ((a>='A' && a<='Z')||(a>='a' && a<='z')) {
        printf("Alphabet");
    }
    else if (a>= '0' && a<='9') {
        printf("Digit");
    }
    else {
        printf("Special Character");
    }

    return 0;
}
