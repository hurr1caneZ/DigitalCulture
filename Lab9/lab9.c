#include <stdio.h>
#include <string.h>
#include <malloc.h>

int main()
{
    //Task 2
   
    printf("Task 2: \n \n");
    int minute, payment, over; // количество потр. минут, цена мес. пакета, цена мин. сверх пакета

    printf("Enter the cost of the monthly package (499 minutes of calls): ");
    scanf("%d", &payment);
    printf("\n");

    printf("Enter the number of minutes spent: ");
    scanf("%d", &minute);
    printf("\n");

    printf("Enter the cost of a minute in excess of the amount included in the package: ");
    scanf("%d", &over);
    printf("\n \n");

    int payment_over;

    if (minute <= 499)
    {
        printf("Package price: %d rub.", payment);
    }

    else if (minute < 0) 
    {
        printf ("Please enter a valid value!");
    }

    else if (minute > 499) 
    {
        payment_over = payment + (minute - 499) * over;
        printf("Package price: %d rub.", payment_over);
    }
    

    //Task 3
    const char *str[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    char res[10];
    int n;
    scanf("%d", &n);
    strcpy(res, str[n]);
    printf("%s", res);
    
}


