// 14leetcode.cpp: 定义应用程序的入口点。
//

#include "14leetcode.h"
#include <vector>

using namespace std;

string longestCommonPrefix(vector<string>& strs) {
	if (strs.size() == 0)
	{
		return "";
	}
	
	string first = strs[0]; 
	for (int j = 1; j < strs.size(); j++)
	{
		while (strs[j].find(first) != 0)
		{
			first = first.substr(0, first.length() - 1);
			if (first.length() == 0)
			{
				return "";
			}
		}
	}  
	return first;

}

int main()
{
	cout << "Hello CMake。" << endl;
	//vector<int> v = { 1,2,3,4,5 }

	vector<string> strs = { "aa","ab"};
	string asda = longestCommonPrefix(strs);
	cout << asda;


	return 0;
}


/*for each (string tempVar in strs)
		{
			int result = tempVar.find(compare);
			if (tempVar.find(compare) != 0) {
				return first.substr(0, i-1);
			}
		}*/