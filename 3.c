#include <stdio.h>

int main() {
    int a, b, c;

    // Ввод трех чисел
    printf("Введите три числа через пробел: ");
    scanf("%d %d %d", &a, &b, &c);

    // Вычисление знака произведения
    int product = a * b * c;
    int sign = (product > 0) - (product < 0);

    // Вывод результата (1, -1 или 0)
    printf("%d\n", sign);

    return 0;
}
