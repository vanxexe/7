#include <iostream>
#include <clocale>

int main()
{
    setlocale(LC_ALL, "");
    int grade;
    std::cout << "Введiть оцiнку (0-100): ";
    std::cin >> grade;

    if (grade < 0 || grade > 100) {
        std::cout << "Помилка: невiрний бал!" << std::endl;
        return 0;
    }

    int category = grade / 17;

    std::cout << "Результат: ";
    switch (category) {
        case 5: std::cout << "Відмінно"; break;
        case 4: std::cout << "Добре"; break;
        case 3: std::cout << "Задовільно"; break;
        case 2: case 1: std::cout << "Незадовільно"; break;
        default: std::cout << "Не атестовано"; break;
    }
    return 0;
}
    