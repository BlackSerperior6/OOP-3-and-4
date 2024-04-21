#include "Pair.h"

Pair& Pair::operator = (Pair& anotherPair) //Перегрузка оператора присваивания
{
	First = anotherPair.First;
	Second = anotherPair.Second;

	return *this;
}

Pair& Pair::operator - (Pair& anotherPair) //Перегрузка оператора вычитания
{
	Pair resultPair(First - anotherPair.First, Second - anotherPair.Second);
	return resultPair;
}

Pair& Pair::operator -= (Pair& anotherPair) //Перегрузка оператора вычитания с присваиванием
{
	First -= anotherPair.First;
	Second -= anotherPair.Second;

	return *this;
}

Pair& Pair::operator + (double variable)  //Перегрузка оператор сложения
{
	Pair resultPair(First, Second);

	int fullPart = variable;

	if (variable - fullPart == 0)
		resultPair.First += variable;
	else
		resultPair.Second += variable;

	return resultPair;
}

Pair& Pair::operator += (double variable) //Перегрузка оператора сложения с присваиванием
{
	Pair newPair(First, Second);

	int fullPart = variable;

	if (variable - fullPart == 0)
		First += variable;
	else
		Second += variable;

	return *this;
}

istream& operator >> (istream &stream, Pair& pair) //Перегрузка оператор ввода через поток
{
	cout << "Число один?"; stream >> pair.First;
	cout << "Число два?"; stream >> pair.Second;

	return stream;
}

ostream& operator << (ostream& stream, Pair& pair) //Перегрузка оператора вывода через поток
{
	return { stream << pair.First << ":" << pair.Second };
}