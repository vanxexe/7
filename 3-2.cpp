#include <iostream>
#include <clocale>

int main()
{
    setlocale(LC_ALL, "");

        int choice;
        std::cout << "--- Геометричний калькулятор ---" << std::endl;
        std::cout << "1. Квадрат" << std::endl;
        std::cout << "2. Коло" << std::endl;
        std::cout << "3. Трикутник" << std::endl;
        std::cout << "Оберіть фігуру: ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                double a;
                std::cout << "Введіть сторону квадрата: ";
                std::cin >> a;
                std::cout << "Площа квадрата: " << a * a << std::endl; break;
            }
            case 2: {
                double r;
                double pi = 3.14; 
                std::cout << "Введіть радіус кола: ";
                std::cin >> r;
                std::cout << "Площа кола: " << pi * r * r << std::endl; break;
            }
            case 3: {
                double a, h;
                std::cout << "Введіть сторону (основу) трикутника: ";
                std::cin >> a;
                std::cout << "Введіть висоту трикутника: ";
                std::cin >> h;
                std::cout << "Площа трикутника: " << 0.5 * a * h << std::endl; break;
            }
            default:
                std::cout << "Помилка! Такого пункту немає." << std::endl; break;
        }

    return 0;
}