#pragma once
#include <iostream>

using namespace std;

class Pair
{
private:
	int First;
	double Second;

public:

	int getFirst() { return First; }

	double getSecond() { return Second; }

	void setFirst(int first) { First = first; }

	void setSecond(double second) { Second = second; }

	Pair() {}

	Pair(int first, double second)
	{
		setFirst(first);
		setSecond(second);
	}

	Pair(Pair& anotherPair) 
	{
		setFirst(anotherPair.getFirst());
		setSecond(anotherPair.getSecond());
	}

	~Pair() {}

	Pair& operator = (Pair& anotherPair);

	Pair& operator - (Pair& anotherPair);

	Pair& operator -= (Pair& anotherPair);

	Pair& operator + (double variable);

	Pair& operator += (double variable);

	friend istream& operator >> (istream& stream, Pair& pair); //Добавление оператора ввода в друж. функции

	friend ostream& operator << (ostream& stream, Pair& pair); //Добавление оператора вывода в друж. функции
};

