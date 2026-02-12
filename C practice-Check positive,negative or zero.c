#include <stdio.h>

int main()
{
    int num;
    scanf("%d",&num);
    if(num>0)
    {
        printf("positive number");
    }
    if(num<0)
   {
        printf("negative number");
    }
    if(num==0){
    printf("zero");
    }
    return 0;
}