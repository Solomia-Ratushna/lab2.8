//Account.h
#pragma once
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Account
{
private:
	int no;
	string name;
	double percent;
	static int counter;
public:
	class Money
	{
	private:
		int _1000, _500, _200, _100, _50, _20, _10, _5, _2, _1, _050, _025, _010, _005, _002, _001;
		static int counter;
	public:
		int Get_1000() const { return _1000; }
		int Get_500() const { return _500; }
		int Get_200() const { return _200; }
		int Get_100() const { return _100; }
		int Get_50() const { return _50; }
		int Get_20() const { return _20; }
		int Get_10() const { return _10; }
		int Get_5() const { return _5; }
		int Get_2() const { return _2; }
		int Get_1() const { return _1; }
		int Get_050() const { return _050; }
		int Get_025() const { return _025; }
		int Get_010() const { return _010; }
		int Get_005() const { return _005; }
		int Get_002() const { return _002; }
		int Get_001() const { return _001; }


		void Set_1000(int value);
		void Set_500(int value);
		void Set_200(int value);
		void Set_100(int value);
		void Set_50(int value);
		void Set_20(int value);
		void Set_10(int value);
		void Set_5(int value);
		void Set_2(int value);
		void Set_1(int value);
		void Set_050(int value);
		void Set_025(int value);
		void Set_010(int value);
		void Set_005(int value);
		void Set_002(int value);
		void Set_001(int value);


		Money();
		Money(int _1000, int _500, int _200, int _100, int _50, int _20, int _10, int _5, int _2, int _1, int _050, int _025, int _010, int _005, int _002, int _001);
		Money(double x);
		Money(const Money&);

		Money& operator = (const Money&);
		operator string () const;

		Money& operator ++ ();
		Money& operator -- ();
		Money operator ++ (int);
		Money operator -- (int);

		friend ostream& operator << (ostream& out, const Money& p);
		friend istream& operator >> (istream& in, Money& p);



		friend bool operator <(Money&, Money&);
		friend bool operator == (Money&, Money&);
		friend bool operator > (Money&, Money&);
		friend bool operator <=(Money&, Money&);
		friend bool operator >= (Money&, Money&);
		friend bool operator != (Money&, Money&);

		friend Money operator +(const Money&, const Money&);
		friend Money operator -(const Money&, const Money&);
		friend double operator /(const Money&, const Money&);

		double get_sum() const;
		friend Money DivisionToFractionsNumber(const Money& a, double div);
		friend Money MultToFractionsNumber(const Money& a, double mult);

		static int getCounter();
	};
	Money GetMoney() const { return money; }
	int GetNo() const { return no; }
	string GetName() const { return name; }
	double GetPercent() const { return percent; }

	void SetName(string value) { name = value; }
	void SetMoney(Money value);
	bool SetNo(int value);
	bool SetPercent(double value);

	Account();
	Account(int, string, Money, double);
	Account(const Account&);

	Account& operator = (const Account&);
	operator string () const;

	friend ostream& operator << (ostream& out, const Account& s);
	friend istream& operator >> (istream& in, Account& s);

	Account& operator ++ ();
	Account& operator -- ();
	Account operator ++ (int);
	Account operator -- (int);

	double Withdraw();
	double Put();
	void Perc() { cout << "Summa + Percent = " << Put() + (((money.get_sum() / 100) * percent)) << endl; }
	void toDollar() { cout << "Summa in dollar = " << money.get_sum() * 0.036 << endl; }
	void toEuro() { cout << "Summa in euro = " << money.get_sum() * 0.03 << endl; }
	const char* SumToNumeral();

	static int getCounter();
private:
	Money money;
};
