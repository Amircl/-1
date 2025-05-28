#include <stdio.h>

int main() {
    int number;

    // Ввод числа
    printf("Введите целое число: ");
    scanf("%d", &number);

    // Проверка четности (1 - четное, 0 - нечетное)
    printf("%d\n", (number % 2) == 0);

    return 0;
}
