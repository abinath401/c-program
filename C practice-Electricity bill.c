#include <stdio.h>

int main() {
    int units;
    int bill;
    printf("Enter units:");
    scanf("%d",&units,&bill);
    if(units > 0)
    {
        bill = units*5;  
    } else
    {
        bill =0;
    }
    printf("Bill amount = Rs.%d",bill);

    return 0;
}
