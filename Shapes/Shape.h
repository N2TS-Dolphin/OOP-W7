#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

class Shape
{
public:
    virtual double area() = 0;
    virtual double perimeter() = 0;
};

class Rectangle : public Shape
{
private:
    double _a;
    double _b;

public:
    Rectangle();
    Rectangle(double, double);

public:
    string toString();
    double area() { return _a * _b; }
    double perimeter() { return (_a + _b) * 2; }
};

class Square : public Shape
{
private:
    double _a;

public:
    Square();
    Square(double);

public:
    string toString();
    double area() { return _a * _a; }
    double perimeter() { return _a * 4; }
};

class Circle : public Shape
{
private:
    double _a;
    double _PI = 3.14;

public:
    Circle();
    Circle(double);

public:
    string toString();
    double area() { return _a * _a * _PI; }
    double perimeter() { return _a * 2 * _PI; }
};