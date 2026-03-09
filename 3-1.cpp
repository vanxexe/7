#include <iostream>
#include <clocale>

int main()
{
    setlocale(LC_ALL, "");
    int choice;
    double total = 0;

    std::cout << "--- MEHЮ ---" << std::endl;
    std::cout << "1. Бургер - 100 грн" << std::endl;
    std::cout << "2. Картопля - 50 грн" << std::endl;
    std:: cout << "3. Кола - 30 грн" << std::endl;
    std::cout << "0. Вихід (рахунок)" << std::endl;

    while (true) {
        std::cout << "Ваш вибір: ";
        std::cin >> choice;
        if (choice == 0) break;

        switch (choice) {
            case 1:
                total += 100;
                std::cout << "Додано Бургер"; break;
            case 2:
                total += 50;
                std::cout << "Додано Картоплю"; break;
            case 3:
                total += 30;
                std::cout << "Додано Колу"; break;
            default:
                std::cout << "Помилка! Такого пункту немає."; break;
        }
        
        if (choice >= 1 && choice <= 3) {
            std::cout << " (Сума: " << total << " грн)" << std::endl;
        }
    }

    std::cout << "-------------------" << std::endl;
    std::cout << "Всього до сплати: " << total << " грн" << std::endl;
    
    return 0;
}