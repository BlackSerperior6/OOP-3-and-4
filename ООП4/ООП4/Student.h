#pragma once

#include "Person.h"

#include <iostream>

class Student : public Person
{
protected:
	string SubjectName; //Название предмета

	int Grade; //Оценка

public:

	//Геттеры
	string getSubjectName() { return SubjectName; }
	int getGrade() { return Grade; }

	//Сеттеры
	void setSubjectName(string subjectName) { SubjectName = subjectName; }
	void setGrade(int grade) { Grade = grade; };

	//Конст. без параметров. Выводит адресс создаваемого объекта
	Student() { cout << "Активирован пустой конструктор класса - наследника: " << this <<endl; };

	Student(string name, int age, string subjectName, int grade) //конст. с параметрами
	{
		setName(name);
		setAge(age);
		setSubjectName(subjectName);
		setGrade(grade);
	};

	Student(Student& anotherStudent) //конст. копирования
	{
		setName(anotherStudent.getName());
		setAge(anotherStudent.getAge());
		setSubjectName(anotherStudent.getSubjectName());
		setGrade(anotherStudent.getGrade());
	}

	//Диструктор. Выводит адресс уничтожаемого объекта
	~Student() { cout << "Активирован диструктор класса - наследника: " << this << endl; }

	void PrintBadNews() //Метод вывода сообщения о плохой оценке
	{
		if (Grade < 3)
			cout << "Ученик " << getName() << " имеет неудовлетворительную оценку по предмету " << getSubjectName() << endl;
	}

	Person& GetBasicPerson() // метод получения базового класса
	{
		return *this;
	}

	Student& operator=(Student& anotherStudent); //оператор присваивания

	//Потоковые ввод и вывод
	friend istream& operator>>(istream& stream, Student& student);
	friend ostream& operator<<(ostream& stream, Student& student);
};

