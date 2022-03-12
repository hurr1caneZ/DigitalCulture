#include <stdio.h>

struct SQR 
{
    int s;
};

int SQRsqr(struct SQR A, struct SQR B)
{
    return A.s * B.s;
}

int main() 
{
    enum Months 
    {   
        January,
        February,
        March,
        April,
        May,
        June,
        July,
        August,
        September,
        October,
        November,
        December
    };

    printf("Number of July - %d\n", July);
    struct SQR A = {5};
    struct SQR B = {2};
    printf("Square are - %d\n", SQRsqr(A,B));
    struct KEYBOARD 
    {
        unsigned int Ready: 1;
        unsigned int NUMLOCK: 1; 
        unsigned int CAPSLOCK: 1;
        unsigned int SCROLLLOCK:1;
    };

    union CheckKEYBOARD
    {
        unsigned x;
        struct KEYBOARD KEYBOARD;
    };

    union CheckKEYBOARD state;
    printf("Enter a number: \n");
    scanf("%x", &state.x);
    printf("Ready = %d\n", state.KEYBOARD.Ready);
    printf("KEYBOARD = %d\n", state.KEYBOARD.NUMLOCK);
    printf("CAPSLOCK = %d\n", state.KEYBOARD.CAPSLOCK);
    printf("SCROLLLOCK = %d\n", state.KEYBOARD.SCROLLLOCK);
    return 0;
}
//union - объект, позволяющий нескольким переменным различных типов занимать один участок памяти.
//enum используется дял перечисления каких либо значений
//struct набор элементов произвольных типов