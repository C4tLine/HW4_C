#include <stdio.h>

int main() {
    int num;
    int sum, count = 0;
    scanf("%d", &num);

    while(num != 0) { //Пока не равен нулю, прибавляем числа и счётчик
        sum += num;
        count++;
        scanf("%d", &num);
    }
    if(count == 0) { //Проверка ввода нуля в самом начале
        printf("%d", count);
    } else {
        float res = (float) sum / count; //Считаем среднее арифмитическое в дробях
        printf("%.2f", res); //Выводим результат
    }
    return 0;
}