//Вариант 1
#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

float z1(int a) // Создание переменной с плавающей точкой
{
    return 2 * (sin(3. * M_PI - 2. * a) * sin(3. * M_PI - 2. * a)) * (cos(5. * M_PI + 2. * a) *cos(5. * M_PI + 2. * a)); // Введение выражения
}

float z2(int a) // Создание переменной с плавающей точкой
{
    return 1./4 - 1./4 * sin(5. * M_PI_2 - 8. * a); // Введение выражения
}

int main()
{
    int a; // Создание переменной альфа
    scanf("%d",&a);  // Ввод с клавиатуры
    printf("z1 = %.2f\n", z1(a)); // Вывод на экран 
    printf("z2 = %.2f\n", z2(a)); // Вывод на экран
    return 0;
}   

