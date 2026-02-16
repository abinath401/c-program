#include <stdio.h>
int main() {
   int a,b;
   scanf("%d %d",&a,&b);
   int x=a;
   int y=a;
  x/=b;
 y%=b;
   printf("%d %d \n",x,y);
   return 0;
}
