#include <stdio.h>

int main() {
    int n, count = 0;
    scanf("%d", &n); //Считываем количество элементов массива
    int arr[n];//Массив

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); //Проверка элементов массива
        if(arr[i] > 0) {
            count++;//Прибавляем счётчик, если находим положительное число (нуль не считается)
        }
    }

    printf("%d", count);
    return 0;
}