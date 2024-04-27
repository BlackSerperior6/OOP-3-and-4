#pragma once
#include <string>

#include <iostream>

using namespace std;

class Person //Базовый класс
{
protected:
	string Name; //Имя
	int Age; //Сколько лет

public:

	//Конструктор без параметров. Выводит адресс объекта класса
	Person() { cout << "Активирован пустой конструктор базового класса: " << this << endl; };

	Person(string name, int age) //Конструктор с парамметрами
	{
		cout << "Активирован конструктор с параметрами: " << this << endl;

		setName(name);
		setAge(age);
	}

	Person(Person& anotherPerson) //Конструктор копирования 
	{
		setName(anotherPerson.getName());
		setAge(anotherPerson.getAge());
	}

	//Диструктор. Выводит адресс уничтожаемого объекта
	~Person() { cout << "Активирован диструктор базового класса: " << this << endl; };

	//Сеттеры
	void setName(string name){ Name = name; } 
	void setAge(int age) { Age = age; } 

	//Геттеры
	string getName() { return Name; }
	int getAge() { return Age; }

	Person& operator= (Person& anotherPerson); //Оператор присваивания

	//Дружественные функции ввода - вывода
	friend istream& operator>>(istream& stream, Person& person);
	friend ostream& operator<<(ostream& stream, Person& person);
};

