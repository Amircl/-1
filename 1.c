#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Ввод температуры в градусах Цельсия
    printf("Введите температуру в градусах Цельсия: ");
    scanf("%f", &celsius);

    // Конвертация в Фаренгейты
    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    // Вывод результата с двумя знаками после запятой
    printf("C = %.0f ; F = %.2f\n", celsius, fahrenheit);

    return 0;
}
