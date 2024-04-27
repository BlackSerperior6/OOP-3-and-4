#pragma once

#include "Person.h"

#include <iostream>

class Student : public Person
{
protected:
	string SubjectName; //�������� ��������

	int Grade; //������

public:

	//�������
	string getSubjectName() { return SubjectName; }
	int getGrade() { return Grade; }

	//�������
	void setSubjectName(string subjectName) { SubjectName = subjectName; }
	void setGrade(int grade) { Grade = grade; };

	//�����. ��� ����������. ������� ������ ������������ �������
	Student() { cout << "����������� ������ ����������� ������ - ����������: " << this <<endl; };

	Student(string name, int age, string subjectName, int grade) //�����. � �����������
	{
		setName(name);
		setAge(age);
		setSubjectName(subjectName);
		setGrade(grade);
	};

	Student(Student& anotherStudent) //�����. �����������
	{
		setName(anotherStudent.getName());
		setAge(anotherStudent.getAge());
		setSubjectName(anotherStudent.getSubjectName());
		setGrade(anotherStudent.getGrade());
	}

	//����������. ������� ������ ������������� �������
	~Student() { cout << "����������� ���������� ������ - ����������: " << this << endl; }

	void PrintBadNews() //����� ������ ��������� � ������ ������
	{
		if (Grade < 3)
			cout << "������ " << getName() << " ����� �������������������� ������ �� �������� " << getSubjectName() << endl;
	}

	Person& GetBasicPerson() // ����� ��������� �������� ������
	{
		return *this;
	}

	Student& operator=(Student& anotherStudent); //�������� ������������

	//��������� ���� � �����
	friend istream& operator>>(istream& stream, Student& student);
	friend ostream& operator<<(ostream& stream, Student& student);
};

