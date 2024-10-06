#include <iostream>



int main() 
{
    int n, system;
    setlocale(LC_ALL, "Russian");
    

    std::cout << "Введите число: ";
    std::cin >> n;
    std::cout << "Введите 8, если хотите перевести 8ричную систему. Или введите 16, если хотите перевести в 16ричную систему" << std::endl;
    std::cin >> system;
    if (system == 8) 
    {
        std::cout << "Ответ: " << std::oct << n;
    }
    else if (system == 16) 
    {
        std::cout << "Ответ: " << std::hex << n;
    }
    
    return 0;
}