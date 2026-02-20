#include <stdio.h>

int main() {
    int N;
    int revenue;
    int totalrevenue=0;
    int targetdays=0;
    scanf("%d",&N);
    for(int i=0;i<N;i++)
    {
        scanf("%d",&revenue);
        totalrevenue+=revenue;
        if(revenue>50000)
        {
        targetdays++;
        }
    }
    printf("Total revenue:%d \n",totalrevenue);
    printf("Target days:%d \n",targetdays);
    return 0;
}