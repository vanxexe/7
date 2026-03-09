#include <iostream>
#include <clocale>

int main()
{
    setlocale(LC_ALL, "");
    int day;
    std::cout << "Введіть номер дня тижня (1-7): ";
    std::cin >> day;

    switch (day) {
        case 1: std::cout << "Понеділок"; break;
        case 2: std::cout << "Вівторок"; break;
        case 3: std::cout << "Середа"; break;
        case 4: std::cout << "Четвер"; break;
        case 5: std::cout << "П'ятниця"; break;
        case 6: std::cout << "Субота"; break;
        case 7: std::cout << "Неділя"; break;
        default: std::cout << "Помилка";
    }
    return 0;
}
