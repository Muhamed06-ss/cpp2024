#include <iostream>

int main()
{
    int n, result;

    setlocale(LC_ALL, "Russian");

    std::cout << "Проверим гипотезу Сиракуз, введите любое натуральное число: ";
    std::cin >> n;
    while (n > 1)
    {
        if (n % 2 == 0)
        {
            n /= 2;
        }
        else
        {
            n *= 3;
            n += 1;
            n /= 2;
        }
    }
    std::cout << std::endl << "По алгоритму гипотизы Сиракуз от этого числа мы получим число: " << n;

    return 0;
}