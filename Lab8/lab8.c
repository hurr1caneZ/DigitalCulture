#include <stdio.h>
#include <string.h>
//1 4 7 10 12
int main() 
{
    char str_1[20];
    char str_2[20];
    printf("Enter the first word\n");
    scanf("%s",str_1);
    printf("Enter the second word\n");
    scanf("%s", str_2);
    printf("%s + %s = %s%s\n", str_1, str_2, str_1, str_2);
    int n, k = 0;

    if(strcmp(str_1,str_2) == 0) //strncmp - сравнивает строки
    {
        puts("No errors"); //puts – вывод строки в стандартный поток вывода.
    }
    
    else
    {
        puts("Errors alert");
    }
     printf("\n\n");

    //ex7
    printf("String length «%s» - %d symbols\n", str_1, strlen (str_1)); //Функция strlen вычисляет количество символов в строке до первого вхождения символа конца строки. При этом символ конца строки не входит в подсчитанное количество символов


    //ex10
    char *isym;

   //Поиск символов
    isym = strpbrk (str_1,str_2); //strpbrk - поиск символа

   //Вывод результата поиска на консоль
    if (isym == NULL)
    {
        printf("Symbols not founded\n");
    }
        
    else
    {
        printf("The desired character at the position %d\n",isym-str_1+1);
    }

 //ex12
    printf("Segment length: %d\n",strcspn (str_1,str_2)); //strrcspn - длина отрезка одной строки, не содержащего символы второй строки
}