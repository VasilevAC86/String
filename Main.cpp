# include <iostream>
#include<string> // Библиотека, позволяющая работать со строками С++

int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	// Строки языка C
	char cstr[4]{'H','i','!','\0'};
	std::cout << cstr << std::endl;

	char cstr2[] = "Hello world!";
	std::cout << cstr2 << std::endl;

	// Строки языка С++
	std::string mystr; // Базовый конструктор - создание пустой строки ("")
	std::cout << mystr << std::endl;
	mystr = "Oranges and appels";
	std::cout << mystr << std::endl;

	std::cout << mystr + "!!!" << std::endl; // Конкантенация
	mystr += ".\nWow!";
	std::cout << mystr << std::endl;
	
	std::cout << mystr[3] << mystr[4] << std::endl;

	// Ввод данных в строку
	std::cout << "Как тебя зовут?\n";
	std::cout << "Ввод -> ";
	std::string name;
	// std::cin >> name; // плохой вариант, так как считывается только одно слово
	std::getline(std::cin, name);
	std::cout << "Привет, " << name << "!\n";

	std::cout << "А сколько тебе лет?\n";
	std::cout << "Ввод -> ";
	int age;
	std::cin >> age;
	std::cout << age << "? Круто ... \n";

	std::cin.ignore(); // Ставится только после cin перед getline

	std::cout << "Кем ты работаешь?\n";
	std::string job;
	std::getline(std::cin, job);
	std::cout << "Я всегда мечтал быть " << job << " ...\n\n";

	// Методы строк
	std::string str = "Hello world!";

	// length и size, возвращающие длину строки
	std::cout << str.length() << std::endl; // 12
	std::cout << str.size() << std::endl; // 12

	// insert, вставляющий подстроку в строку
	str.insert(3, "WWW");
	std::cout << str << std::endl;

	// replace, заменяющий часть строки на новую подстроку
	str.replace(3, 5, "###");
	std::cout << str << std::endl;

	// find, возвращающий позицию первого вхождения подстроки в строку
	std::cout << str.find('l') << std::endl;
	std::cout << str.find('l', 5) << std::endl;

	// rfind, возвращающий позицию последнего вхождения подстроки в строку
	std::cout << str.rfind('ld') << std::endl;

	// substr
	std::cout << str.substr(3) << std::endl;
	std::cout << str.substr(3, 5) << std::endl;

	// Преобразование числа в строку
	std::cout << "Введите число -> ";
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
		std::cout << "Палиндром\n\n";
	else
		std::cout << "Не палиндром\n\n";

	// Преобразование строки в число
	std::cout << "Введите число -> ";
	std::string strnum;
	std::getline(std::cin, strnum);

	int num = std::stoi(strnum);
	std::cout << num << std::endl;

	// Возведение строк в регистр
	std::string newstr = "Hello!";
	for(short i=0;i<newstr.size();i++)
		//newstr[i] = std::tolower(newstr[i]);
		newstr[i] = std::toupper(newstr[i]);
	std::cout << newstr << std::endl;

	return 0;
}