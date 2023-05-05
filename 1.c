#include <stdio.h>

int main() {
    int days, month, year;
    scanf("%d %d", &month, &year);
    
    if(month == 2) { //Обработка февраля
        if(year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) { //Проверка високосного года
            days = 29;
        } else {
            days = 28;
        }
    } else if(month == 4 || month == 6 || month == 9 || month == 11) { //Проверка месяцев с 30 днями
        days = 30;
    } else { //Вывод 31 дня
        days = 31;
    }
    //Вывод дней
    printf("%d", days);
    return 0;
}