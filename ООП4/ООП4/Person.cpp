#include "Person.h"

#include <iostream>

Person& Person::operator=(Person& anotherPerson) //Оператор присваивания
{
	Name = anotherPerson.Name;
	Age = anotherPerson.Age;

	return *this;
}

//Потоковые ввод и вывод
istream& operator>>(istream& stream, Person& person) 
{
	cout << "Введите имя: "; getline(stream, person.Name);
	cout << "Введите возраст: "; stream >> person.Age;
 
	return stream;
}

ostream& operator<<(ostream& stream, Person& person)
{
	return { stream << "Имя: " << person.Name << ", возраст: " << person.Age };
}