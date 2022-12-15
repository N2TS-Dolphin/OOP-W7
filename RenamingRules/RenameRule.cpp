#include "RenameRule.h"

ReplaceSpecialCharsRule::ReplaceSpecialCharsRule()
{

}

vector <string> ReplaceSpecialCharsRule::specialChars()
{
	_special.push_back("-");

	return _special;
}

string ReplaceSpecialCharsRule::setReplacement(string replace)
{
	_replace = replace;

	return _replace;
}

string ReplaceSpecialCharsRule::Rename(string data)
{
	stringstream builder;

	for (int i = 0; i < data.length(); i++)
	{
		stringstream temp;

		for (int j = 0; j < _special.size(); j++)
		{
			temp << data[i];

			if (temp.str() == _special[j])
				builder << _replace;
			else
				builder << data[i];
		}
	}

	string result = builder.str();
	return result;
}

OneSpaceRule::OneSpaceRule()
{

}

string OneSpaceRule::Rename(string data)
{
	int a = 0;
	stringstream builder;
	while (a < data.length())
	{
		if (data[a] != 32)
		{
			stringstream temp;
			for (int i = a; i < data.length(); i++)
			{
				if (data[i] == 32)
					break;
				else
				{
					temp << data[i];
					a++;
				}
			}

			if (a == data.length())
				builder << temp.str();
			else
				builder << temp.str() << " ";
		}
		else
			a++;
	}

	return builder.str();
}

AddPrefixRule::AddPrefixRule()
{

}

string AddPrefixRule::setPrefix(string Prefix)
{
	_Prefix = Prefix;

	return _Prefix;
}

string AddPrefixRule::Rename(string data)
{
	stringstream builder;

	builder << _Prefix << " " << data;

	string result = builder.str();
	return result;
}
