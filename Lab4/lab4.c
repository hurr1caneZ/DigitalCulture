#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d", &a); 
    c = (a >= 100 && a <= 1000);
    printf("%s\n", c ? "YES" : "NO");
    scanf("%x", &b);
    printf("%d\n", (b >> 22) & 1);    
}