#include "Pair.h"

int main()
{
	srand(time(0));

	setlocale(LC_ALL, "RUS");

	cout << "Введите первое и второе число первой пары" << endl;

	Pair examle1;
	cin >> examle1;

	Pair examle2;
	Pair examle3 = examle2 = examle1;

	cout << endl << examle3 << endl << examle2 << endl << examle1 << endl << endl;

	cout << "Случайное целочисленное число было добавленно к паре 1!" << endl;

	int RandomNumber = rand() % 100;

	examle1 += RandomNumber;

	cout << RandomNumber << endl;

	cout << "Пара 1: " << examle1 << endl;

	cout << "Введите число, которое вы хотите добавить ко второй паре!" << endl;

	double AnotherNumber;

	cin >> AnotherNumber;

	examle2 += AnotherNumber;

	cout << "Пара 2: " << examle2 << endl;

	cout << "Присваиваем третьей паре знаечение суммы пары 1 + ранне сгенерированного случайного числа!" << endl;

	examle3 = examle1 + RandomNumber;

	cout << "Пара 3: " << examle3 << endl << "Пара 1: " << examle1 << " не изменилась!" << endl;

	cout << "Присваиваем второй паре значение разницы между третьей парой и первой!" << endl;

	examle2 = examle3 - examle1;

	cout << "Пара 2: " << examle2 << endl << "Пара 3: " << examle3 << " не изменилась!" << endl;

	cout << "Вычитаем из пары 3 пару 2!" << endl;

	examle3 -= examle2;

	cout << "Пара 3: " << examle3 << endl;
}
