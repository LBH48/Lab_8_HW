#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "rus");

    int n;
    double x;
    double sum = 0.0;

    printf("введите натуральное число n: ");
    scanf("%d", &n);

    printf("введите действительное число x: ");
    scanf("%lf", &x);

    double stepen = sin(x);
    double s = sin(x);

    for (int i = 1; i <= n; i++)
    {
        sum = sum + stepen;
        stepen = stepen * s;
    }

    printf("сумма равна: %.4lf\n", sum);

    system("pause");
    return 0;
}