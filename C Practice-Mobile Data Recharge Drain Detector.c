#include <stdio.h>

int main() {
    int totalData,N;
    scanf("%d",&totalData);
    scanf("%d",&N);
    int usage;
    int remainingData=totalData;
    int successfulDays=0;
    for(int i=0;i<N;i++)
    {
        scanf("%d",&usage);
        remainingData-=usage;
        if(remainingData>=0)
        {
            successfulDays++;
        }
        else{
            break; 
        }
    }
    printf("Remaining Data:%d \n",remainingData);
    printf("Successful Days:%d \n",successfulDays);

    return 0;
}