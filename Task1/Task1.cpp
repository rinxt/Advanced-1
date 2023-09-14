#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

int main()
{
    system("chcp 1251");
    std::srand(std::time(nullptr));
    std::vector<int> multiply_vec;

    std::cout << "Входные данные:  ";

    for (int i = 0; i < 10; ++i) {
        int random_num = std::rand() % 21 - 10; // генерация числа от -10 до 10
        multiply_vec.push_back(random_num);
        std::cout << std::setw(4) << random_num << " ";
    }
    std::cout << std::endl;

    std::for_each(multiply_vec.begin(), multiply_vec.end(), [](int& num) {
        if (num % 2 != 0) {
            num *= 3;
        }
        });

    std::cout << "Выходные данные: ";
    for (const int& num : multiply_vec) {
        std::cout << std::setw(4) << num << " ";
    }
}