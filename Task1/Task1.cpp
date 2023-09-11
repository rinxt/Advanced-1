#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    system("chcp 1251");
    std::vector<int> multiply_vec{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    std::cout << "Входные данные: ";
    for (const int& num : multiply_vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::for_each(multiply_vec.begin(), multiply_vec.end(), [](int& num) {
        if (num % 2 != 0) {
            num *= 3;
        }
        });

    std::cout << "Выходные данные: ";
    for (const int& num : multiply_vec) {
        std::cout << num << " ";
    }
}