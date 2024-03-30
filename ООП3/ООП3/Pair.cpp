#include "Pair.h"

Pair& Pair::operator = (Pair& anotherPair)
{
	First = anotherPair.First;
	Second = anotherPair.Second;

	return *this;
}

Pair& Pair::operator - (Pair& anotherPair)
{
	Pair resultPair(First - anotherPair.First, Second - anotherPair.Second);
	return resultPair;
}

Pair& Pair::operator -= (Pair& anotherPair)
{
	First -= anotherPair.First;
	Second -= anotherPair.Second;

	return *this;
}

Pair& Pair::operator + (double variable) 
{
	Pair resultPair(First, Second);

	int fullPart = variable;

	if (variable - fullPart == 0)
		resultPair.First += variable;
	else
		resultPair.Second += variable;

	return resultPair;
}

Pair& Pair::operator += (double variable)
{
	Pair newPair(First, Second);

	int fullPart = variable;

	if (variable - fullPart == 0)
		First += variable;
	else
		Second += variable;

	return *this;
}

istream& operator >> (istream &stream, Pair& pair)
{
	cout << "Число один?"; stream >> pair.First;
	cout << "Число два?"; stream >> pair.Second;

	return stream;
}

ostream& operator << (ostream& stream, Pair& pair)
{
	return { stream << pair.First << ":" << pair.Second };
}