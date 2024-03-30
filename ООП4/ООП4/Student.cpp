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
	cout << "������� ���: "; getline(stream, student.Name);
	cout << "������� �������: "; stream >> student.Age;

	stream.ignore();

	cout << "������� ������� �������: "; getline(stream, student.SubjectName);
	cout << "������� ������ ��������: "; stream >> student.Grade;

	return stream;
}

ostream& operator<<(ostream& stream, Student& student)
{
	return { stream << "���: " << student.Name << ", �������: " << student.Age << ", �������: " << student.SubjectName << ", ������: " << student.Grade};
}
