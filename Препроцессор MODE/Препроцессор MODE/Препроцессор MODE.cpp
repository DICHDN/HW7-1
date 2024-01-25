

#include <iostream>
#include <Windows.h>
#define MODE


void add()
{
    int num1, num2;
    std::cout << "Введите первое число: ";
    std::cin >> num1;
    std::cout << std::endl;
    std::cout << "Введите второе число: ";
    std::cin >> num2;
    std::cout << std::endl;
    std::cout << "Результат сложения превого и второго чисел равен: " << num1 + num2 << std::endl;;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
#if MODE==0
    std::cout << "Работаю в тестовом режиме!" << std::endl;    
#endif // 0
#if MODE==1
    std::cout << "Работаю в боевом режиме!" << std::endl;
    add();
#endif // 1
#ifndef MODE
#error "Неизвестный режим"
#endif


}

