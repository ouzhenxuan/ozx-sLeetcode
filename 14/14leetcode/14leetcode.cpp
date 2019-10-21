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
	if (strs.size() == 1)
	{
		return strs[0];
	}
	string first = strs[0];
	for (int i = 1; i <= first.length(); i++)
	{
		string compare = first.substr(0, i);

		
		for (int j = 1; j < strs.size(); j++)
		{

			string tempVar = strs[j];
			int result = tempVar.find(compare);
			if (tempVar.find(compare) != 0) {
				return first.substr(0, i - 1);
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