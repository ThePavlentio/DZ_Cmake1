#include "my_first_cmake_program.h"

void greeting()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::string username{};

	std::cout << "������� ���: ";
	std::getline(std::cin >> std::ws, username);
	std::cout << "������������, " << username << '!' << std::endl;
}