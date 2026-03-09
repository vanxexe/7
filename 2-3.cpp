#include <iostream>
#include <clocale>

int main()
{
    setlocale(LC_ALL, "");
    int month;
    std::cout << "Введіть номер місяця в році (1-12): ";
    std::cin >> month;

    switch (month) {
        case 2: std::cout << "28 днів"; break;
        case 1: case 3: case 5: case 7: case 8: case 10: case 12: std::cout << "31 днів"; break;
        case 4: case 6: case 9: case 11: std::cout << "30 днів"; break;
        default: std::cout << "Помилка";
    }
    return 0;
}
