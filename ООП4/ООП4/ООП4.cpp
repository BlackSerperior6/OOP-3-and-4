#include <iostream>
#include <Windows.h>

#include "Student.h"

using namespace std;

int main()
{
	system("chcp 1251");

	cout << endl;

	Person a; 

	cin >> a; //Ввод данных в первого человека

	cout << endl << a << endl; //Вывод

	//Демонстрация работы метода присваивания для людей
	Person b = a;
	cout << b << endl << endl; 

	Student c;

	cout << endl;

	cin.ignore();

	cin >> c; //Ввод данных в первого студента

	cout << endl;
	c.PrintBadNews(); //Вызов метода на печать сооб. о плохой оценке

	cout << endl << c << endl << endl; //Вывод студента
	
	cout << c.GetBasicPerson() << endl << endl; //Вывод его базового класса

	//Демонстрация работы метода присваивания для студентов
	Student e = c;
	cout << endl << e << endl;

	//Базовый класс может получить данные из наследника
	b = e;
	cout << b << endl << endl;
}
