#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

class Rule
{
public:
	virtual string Rename(string) = 0;
};

class ReplaceSpecialCharsRule : public Rule
{
private:
	string _data;
	string _replace;
	vector <string> _special;

public:
	ReplaceSpecialCharsRule();

public:
	vector <string> specialChars();
	string setReplacement(string);

public:
	string Rename(string);
};

class OneSpaceRule : public Rule
{
private:
	string _data;

public:
	OneSpaceRule();

public:
	string Rename(string);
};

class AddPrefixRule : public Rule
{
private:
	string _data;
	string _Prefix;

public:
	AddPrefixRule();

public:
	string setPrefix(string);

public:
	string Rename(string);
};