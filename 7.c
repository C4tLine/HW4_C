#include <stdio.h>

int main() {
    int n, num;
    int zer, pos, neg = 0;
    scanf("%d", &n); //Считываем количество чисел

    for(int i = 0; i < n; i++) {
        scanf("%d", &num); //Считываем числа
        if(num == 0) {
            zer++;//Счётчик нулей
        } else if(num > 0) {
            pos++;//Счётчик положительных чисел
        } else {
            neg++; //Счётчик отрицательных чисел
        }
    }
    //Вывод счётчиков
    printf("%d %d %d", zer, pos, neg);
    return 0;
}