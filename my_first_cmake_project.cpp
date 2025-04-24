#include <iostream>
#include <Windows.h>
#include <string>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::string username{};

	std::cout << "Введите имя: ";
	std::getline(std::cin >> std::ws, username);
	std::cout << "Здравствуйте, " << username << '!' << std::endl;

	return 0;
}
