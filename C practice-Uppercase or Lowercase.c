#include <stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);
    if(ch>='A'&& ch<='Z')
    {
        printf("uppercase letter");
    }
    else if (ch>='a' && ch<='z'){
        printf("lowercase letter");
    }
    else{
        printf("numbers");
    }
    
    return 0;
}S