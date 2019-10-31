// 28ImplementStrStr().cpp: 定义应用程序的入口点。
//

#include "28ImplementStrStr().h"

using namespace std;

int strStr(string haystack, string needle) {
	if (needle == "")
	{
		return 0;
	}
	else if (needle.length() > haystack.length())
	{
		return -1;
	}
	int index = -1;
	for (int i = 0; i < haystack.length(); i++)
	{
		char ch = haystack[i];
		if (i + needle.length() > haystack.length() )
		{
			return -1;
		}
		if (ch == needle[0])
		{
			string partS = haystack.substr(i, needle.length());
			if (partS == needle)
			{
				return i;
			}
		}
	}  
	return index;
}


int main()
{
	cout << strStr("mississippi", "issip") << endl;
	
	cout << "Hello CMake。" << endl;
	return 0;
}
