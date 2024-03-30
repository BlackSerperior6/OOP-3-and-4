#include "Student.h"

#include <iostream>

Student& Student::operator=(Student& anotherStudent)
{
	Name = anotherStudent.Name;
	Age = anotherStudent.Age;
	SubjectName = anotherStudent.SubjectName;
	Grade = anotherStudent.Grade;

	return *this;
}

istream& operator>>(istream& stream, Student& student)
{
	cout << "Введите имя: "; getline(stream, student.Name);
	cout << "Введите возраст: "; stream >> student.Age;

	stream.ignore();

	cout << "Введите предмет ученика: "; getline(stream, student.SubjectName);
	cout << "Введите оценку ученимка: "; stream >> student.Grade;

	return stream;
}

ostream& operator<<(ostream& stream, Student& student)
{
	return { stream << "Имя: " << student.Name << ", возраст: " << student.Age << ", предмет: " << student.SubjectName << ", оценка: " << student.Grade};
}
