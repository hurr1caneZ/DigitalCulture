#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
 float a[4] = {56.4, 36.5, 7.7, 44.3};
 float *f = a; // указатель на массив
 f[0] = 56.4;
 printf("%s\n", "Task 1:");
 
 for (int i = 0; i <=3; i++) // Вывод элементов массива
 {
 printf("%.1f\n", *f++); // Задание 1
 }

 int j;
 double *array2;
 array2 = (double*)malloc(4 * sizeof(double)); // динамически выделяем память для дробных чисел маллок 32 байта
 printf("%s\n", "Task 2:");
 array2[0] = 56.4;
 array2[1] = 36.5;
 array2[2] = 7.7;
 array2[3] = 44.3;

 for(j = 0; j <= 3; j++) // Вывод элементов массива
 {
 printf("%.1f\n", *array2++);
 }
 
 free(array2 - 4); // на начале массива
 return 0; 
}