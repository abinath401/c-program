#include <stdio.h>

int main() {
    int a, b, c;

    scanf("%d %d %d",&a,&b,&c);

    if(  (a==b && a==b)||(b==a && b==c)){
        printf("equilateral triangle");
    }
    else {
        printf("Not equilateral triangle");
}

    return 0;
}
