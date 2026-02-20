#include <stdio.h>

int main() {
    int N;
    int error;
    int totalError=0;
    int criticalHours=0;
    scanf("%d",&N);
    for(int i=0;i<N;i++)
    {
        scanf("%d",&error);
        totalError +=error;
        if(error>50)
        {
            criticalHours++;
        }
    }
    printf("Total Error:%d \n",totalError);
    printf("critical hours:%d \n",criticalHours);
    return 0;
}