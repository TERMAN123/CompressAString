#include "pch.h"
#include <iostream>
#include <string>

int main()
{
	std::string str;
	std::string newStr;
	getline(std::cin, str);
	int count = 1;
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == str[i + 1])
		{
			count++;
		}
		else if(i <= str.size() - 1)
		{
			newStr.push_back(str[i]);
			if (count > 1)
			{
				std::string s = std::to_string(count);
				newStr.append(s);
			}
			count = 1;
		}

	}
	if (str.size() > newStr.size())
	{
		std::cout << "Optimized:" << newStr;
	}
	else
	{
		std::cout << "No optimization";
	}
	return 0;
}