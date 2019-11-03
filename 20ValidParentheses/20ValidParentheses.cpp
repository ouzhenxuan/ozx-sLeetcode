// 20ValidParentheses.cpp: 定义应用程序的入口点。
//

#include "20ValidParentheses.h"
#include <stack>
#include <map>

using namespace std;

bool isValid(string s) {
	map<char, char> myMap = { { ']', '['} ,{'}','{'},{')','('} };

	stack <char> myStack;
	//for each (char c in s) 用的这个 力扣编译不过
	for (char c : s) {
		map<char, char>::iterator iter;
		iter = myMap.find(c);
		if (myMap.find(c) != myMap.end())
		{//找到了，看栈顶是不是对应的value
			if (myStack.size() == 0)
			{
				return false;
			}
			if (myStack.top() == myMap.find(c)->second)
			{
				myStack.pop();
			}
			else
			{
				return false;
			}
		}
		else
		{//没找到，入栈
			myStack.push(c);
		}
	} 
	if (myStack.size() != 0)
	{
		return false;
	}
	return true;

}


int main()
{
	cout << "Hello CMake。" << endl;

	cout << isValid("[]{}");

	return 0;
}
