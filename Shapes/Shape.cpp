#include "Shape.h"

Rectangle::Rectangle()
{

}

Rectangle::Rectangle(double w, double h)
{
    _a = w;
    _b = h;
}

string Rectangle::toString()
{
    stringstream builder;

    builder << "Rectangle w = " << _a << ", h = " << _b;

    string result = builder.str();
    return result;
}

Square::Square()
{

}

Square::Square(double w)
{
    _a = w;
}

string Square::toString()
{
    stringstream builder;

    builder << "Square a = " << _a;

    string result = builder.str();
    return result;
}

Circle::Circle()
{

}

Circle::Circle(double r)
{
    _a = r;
}

string Circle::toString()
{
    stringstream builder;

    builder << "Circle r = " << _a;

    string result = builder.str();
    return result;
}