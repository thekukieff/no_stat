#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	std::ofstream file;//����������
	int choose;
	int year;
	float uan;
	std::string name, proff, dump, file_name;

	while (true)
	{


		std::cout << "�������� ����\n";
		std::cout << "1 - File.txt; 2 - Document.txt; 3 - Text.txt; 0 - �����\n";

		std::cin >> choose;
		while (choose < 0 || choose > 3) {
			std::cerr << "Error\n";
			std::cin >> choose;
		}
		if (choose == 1)
		{
			file_name = "File.txt";
		}
		else if (choose == 2)
		{
			file_name = "Document.txt";
		}
		else if (choose == 3) {
			file_name = "Text.txt";
		}
		else if (choose == 0) {
			break;
		}



		std::cin.ignore(32000, '\n');
		std::cout << "��� ���� �����: ";
		std::getline(std::cin, name);


		std::cout << "\n������� ��� ���: ";
		std::cin >> year;
		std::cin.ignore(32000, '\n');

		std::cout << "\n��� ������ �����: ";
		std::getline(std::cin, proff);


		std::cout << "\n������ �������� �������: ";
		std::getline(std::cin, dump);


		std::cout << "\n������� ����� ����: ";
		std::cin >> uan;
		std::cin.ignore(32000, '\n');

		file.open(file_name ); //file.app - �� ��������������, � ���������





		if (!file.is_open()) {
			std::cerr << "Error";
		}
		else {

			file << "1) " << name;
			file << "\n2) " << year;
			file << "\n3) " << proff;
			file << "\n4) " << dump;
			file << "\n5) " << uan;


		}
	file.close();
	}
	file.close();


	return 0;
}