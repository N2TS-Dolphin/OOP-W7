#pragma once
#include <string>
#include <sstream>
#include <vector>

using namespace std;

class DailyEmployee
{
private:
	int _days;
	int _payment;

public:
	DailyEmployee();
	DailyEmployee(int days, int payment)
	{
		_days = days;
		_payment = payment;
	}

public:
	int salary() { return _days * _payment; }
};

class ProductEmployee
{
private:
	int _products;
	int _payment;

public:
	ProductEmployee();
	ProductEmployee(int products, int payment)
	{
		_products = products;
		_payment = payment;
	}

public:
	int salary() { return _products * _payment; }
};

class Manager
{
private:
	int _managers;
	int _payment;

public:
	Manager();
	Manager(int managers, int payment)
	{
		_managers = managers;
		_payment = payment;
	}

public:
	int salary() { return _managers * 500000 + _payment; }
};