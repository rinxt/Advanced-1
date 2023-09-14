#include <iostream>
#include <vector>
#include <variant>

std::variant<int, std::string, std::vector<int>> get_variant() {
	std::srand(std::time(nullptr));
	int random_variable = std::rand() % 3;

	std::variant<int, std::string, std::vector<int>> result;
	switch (random_variable)
	{
	case 0:
		result = 5;
		break;
	case 1:
		result = "string";
		break;
	case 2:
		result = std::vector<int>{ 1, 2, 3, 4, 5 };
		break;
	default:
		break;
	}
	return result;
}

int main()
{
	system("chcp 1251");

	auto result = get_variant();

	if (std::holds_alternative<int>(result)) {
		std::cout << std::get<int>(result) * 2;
	}
	else if (std::holds_alternative<std::string>(result)) {
		std::cout << std::get<std::string>(result);
	}
	else if (std::holds_alternative<std::vector<int>>(result)) {
		const auto& vec = std::get<std::vector<int>>(result);
		for (const auto& element : vec) {
			std::cout << element << " ";
		}
	}
	else std::cout << "Ошибка значения";

	return 0;
}

