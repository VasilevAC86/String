# include <iostream>
#include<string> // ����������, ����������� �������� �� �������� �++

int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	// ������ ����� C
	char cstr[4]{'H','i','!','\0'};
	std::cout << cstr << std::endl;

	char cstr2[] = "Hello world!";
	std::cout << cstr2 << std::endl;

	// ������ ����� �++
	std::string mystr; // ������� ����������� - �������� ������ ������ ("")
	std::cout << mystr << std::endl;
	mystr = "Oranges and appels";
	std::cout << mystr << std::endl;

	std::cout << mystr + "!!!" << std::endl; // �������������
	mystr += ".\nWow!";
	std::cout << mystr << std::endl;
	
	std::cout << mystr[3] << mystr[4] << std::endl;

	// ���� ������ � ������
	std::cout << "��� ���� �����?\n";
	std::cout << "���� -> ";
	std::string name;
	// std::cin >> name; // ������ �������, ��� ��� ����������� ������ ���� �����
	std::getline(std::cin, name);
	std::cout << "������, " << name << "!\n";

	std::cout << "� ������� ���� ���?\n";
	std::cout << "���� -> ";
	int age;
	std::cin >> age;
	std::cout << age << "? ����� ... \n";

	std::cin.ignore(); // �������� ������ ����� cin ����� getline

	std::cout << "��� �� ���������?\n";
	std::string job;
	std::getline(std::cin, job);
	std::cout << "� ������ ������ ���� " << job << " ...\n\n";

	// ������ �����
	std::string str = "Hello world!";

	// length � size, ������������ ����� ������
	std::cout << str.length() << std::endl; // 12
	std::cout << str.size() << std::endl; // 12

	// insert, ����������� ��������� � ������
	str.insert(3, "WWW");
	std::cout << str << std::endl;

	// replace, ���������� ����� ������ �� ����� ���������
	str.replace(3, 5, "###");
	std::cout << str << std::endl;

	// find, ������������ ������� ������� ��������� ��������� � ������
	std::cout << str.find('l') << std::endl;
	std::cout << str.find('l', 5) << std::endl;

	// rfind, ������������ ������� ���������� ��������� ��������� � ������
	std::cout << str.rfind('ld') << std::endl;

	// substr
	std::cout << str.substr(3) << std::endl;
	std::cout << str.substr(3, 5) << std::endl;

	// �������������� ����� � ������
	std::cout << "������� ����� -> ";
	std::cin >> n;
	std::cin.ignore;
	std::string numstr = std::to_string(n);
	bool flag = true;
	for(int i=0;i<numstr.length()/2; i++)
		if (numstr[i] != numstr[numstr.length() - i - 1]) {
			flag = false;
			break;
		}
	if (flag)
		std::cout << "���������\n\n";
	else
		std::cout << "�� ���������\n\n";

	// �������������� ������ � �����
	std::cout << "������� ����� -> ";
	std::string strnum;
	std::getline(std::cin, strnum);

	int num = std::stoi(strnum);
	std::cout << num << std::endl;

	// ���������� ����� � �������
	std::string newstr = "Hello!";
	for(short i=0;i<newstr.size();i++)
		//newstr[i] = std::tolower(newstr[i]);
		newstr[i] = std::toupper(newstr[i]);
	std::cout << newstr << std::endl;

	return 0;
}