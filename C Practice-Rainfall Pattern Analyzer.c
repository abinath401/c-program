#include <stdio.h>

int main() {
    int n,i;
    int a[100];
    int total=0,heavy=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        total=total+a[i];
        if(a[i]>50)
        {
            heavy++;
        }
    }
    printf("Total Rainfall:%d\n",total);
    printf("Heavy Rain Days:%d",heavy);
    return 0;
}
