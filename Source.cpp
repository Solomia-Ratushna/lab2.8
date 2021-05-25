//Source.cpp
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
#include "Account.h"
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Account p1;
	cout << "Account: " << Account::getCounter() << endl;
	cout << "Account::Money : " << Account::Money::getCounter() << endl;

	Account::Money c1;
	cout << "Account::Money +1: " << Account::Money::getCounter() << endl;

	{
		Account p2;
		cout << "Account: " << Account::getCounter() << endl;
		cout << "Account::Money : " << Account::Money::getCounter() << endl;

		Account::Money c2(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		cout << "Account::Money +1: " << Account::Money::getCounter() << endl;
	}

	cout << "Account: " << Account::getCounter() << endl;
	cout << "Account::Money : " << Account::Money::getCounter() << endl;

	Account x;
	cin >> x;
	cout << x;

	x.Perc();
	x.Put();
	x.Withdraw();
	x.toDollar();
	x.toEuro();

	cout << ++x << endl;
	cout << x << endl;
	cout << x++ << endl;
	cout << x << endl;

	char s[100];
	strcpy(s, x.SumToNumeral());
	cout << "Сума на рахунку:" << s << endl << endl;
	x.SumToNumeral();

	double mult = 5;
	double div = 2;

	Account::Money A = MultToFractionsNumber(x.GetMoney(), mult);
	cout << "MultToFractionsNumber = " << A.get_sum() << endl;
	Account::Money B = DivisionToFractionsNumber(x.GetMoney(), div);
	cout << "DivisionToFractionsNumber = " << B.get_sum() << endl;

	Account y;
	cin >> y;
	cout << y;

	char w[100];
	strcpy(w, y.SumToNumeral());
	cout << "Сума на рахунку:" << w << endl << endl;
	y.SumToNumeral();

	Account::Money a;
	Account::Money b;
	cin >> a;
	cin >> b;

	cout << ++a << endl;
	cout << a << endl;
	cout << a++ << endl;
	cout << a << endl;

	Account::Money X = MultToFractionsNumber(y.GetMoney(), mult);
	cout << "MultToFractionsNumber = " << X.get_sum() << endl;
	Account::Money Y = DivisionToFractionsNumber(y.GetMoney(), div);
	cout << "DivisionToFractionsNumber = " << Y.get_sum() << endl;

	Account::Money C = a + b;
	cout << "Addition = " << C.get_sum() << endl;

	Account::Money D = a - b;
	cout << "Substraction = " << D.get_sum() << endl;

	cout << "Division = " << a / b << endl;

	cout << "More = " << (a > b) << endl;
	cout << "MoreEqual = " << (a >= b) << endl;
	cout << "Less = " << (a < b) << endl;
	cout << "LessEqual = " << (a <= b) << endl;
	cout << "Equal = " << (a == b) << endl;
	cout << "NonEqual = " << (a != b) << endl;

	return 0;
}
